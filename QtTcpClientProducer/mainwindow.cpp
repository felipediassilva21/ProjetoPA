#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimerEvent>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);

  connect(ui->botConectar,
          SIGNAL(clicked(bool)),
          this,
          SLOT(on_botConectar_clicked()));
  connect(ui->botDesconectar,
          SIGNAL(clicked(bool)),
          this,
          SLOT(on_botDesconectar_clicked()));
  connect(ui->botIniciar,
          SIGNAL(clicked(bool)),
          this,
          SLOT(botIniciar()));
  connect(ui->botParar,
          SIGNAL(clicked(bool)),
          this,
          SLOT(botParar()));
}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}


void MainWindow::tcpConnect(){
  socket->connectToHost(ui->lineEdit->text(),1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Conectado";
    ui->label_5->setText("Conectado");
  }
  else{
    qDebug() << "Desconectado";
  }
}

void MainWindow::putData(){
  QDateTime datetime;
  QString str;
  qint64 msecdate;

  int Min, Max;
  Min = ui->min->value();
  Max = ui->max->value();

  if(socket->state()== QAbstractSocket::ConnectedState){

    msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
    str = "set "+ QString::number(msecdate) + " " +
          QString::number(Min+(rand()%(Max-Min)))+"\r\n";

      qDebug() << str;
      qDebug() << socket->write(str.toStdString().c_str())
               << " bytes written";
      if(socket->waitForBytesWritten(3000)){
        qDebug() << "wrote";
      }

      ui->Valores->append(str);
  }
}

void MainWindow::on_botConectar_clicked()
{
  tcpConnect();
}

void MainWindow::on_botDesconectar_clicked()
{
  socket->disconnectFromHost();
  ui->label_5->setText("Desconectado");
}



void MainWindow::on_minSlider_valueChanged(int value)
{
  ui->min->display(value);
}


void MainWindow::on_maxSlider_valueChanged(int value)
{
    ui->max->display(value);
}

void MainWindow::on_tempoSlider_valueChanged(int value)
{
    ui->tempo->setText(QString::number(value));
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    putData();
}

void MainWindow::botIniciar()
{
    int seg;
    seg = 1000*(ui->tempoSlider->value());
    intervalo = startTimer(seg);
}


void MainWindow::botParar()
{
    killTimer(intervalo);
}

