#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  //tcpConnect();

  connect(ui->Conectar,
          SIGNAL(clicked(bool)),
          this,
          SLOT(on_Conectar_clicked()));

  connect(ui->Iniciar,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));

  connect(ui->Desconectar,
          SIGNAL(clicked(bool)),
          this,
          SLOT(on_Desconectar_clicked()));

  connect(ui->Parar,
          SIGNAL(clicked(bool)),
          this,
          SLOT(on_Parar_clicked()));
}

void MainWindow::tcpConnect(){
socket->connectToHost(ui->Barraip->text(),1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
    ui->status->setText("Conectado");
    ui->Listaip->setText(ui->Barraip->text());
  }
  else{
    qDebug() << "Disconnected";
    ui->status->setText("Desconectado");
    ui->Listaip->setText("Endereço de Ip inválido.");
  }
}

void MainWindow::getData(){
  QString str;
  ui->inipar->setText("Iniciar");
  QByteArray array;
  QStringList list;
  qint64 thetime;
  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      socket->write("get 127.0.0.1 5\r\n");
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        list = str.split(" ");
        if(list.size() == 2){
          bool ok;
          str = list.at(0);
          thetime = str.toLongLong(&ok);
          str = list.at(1);
          qDebug() << thetime << ": " << str;
        }
      }
    }
  }
}


MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}

void MainWindow::on_Conectar_clicked()
{
QString end_ip ="127.0.0.1";
  if(ui->Barraip->text() == end_ip){
    tcpConnect();
  }
  else{
    ui->Listaip->setText("Endereço de Ip inválido.");
    socket->disconnectFromHost();
    ui->status->setText("Desconectado");
  }
}



void MainWindow::on_Desconectar_clicked()
{
    socket->disconnectFromHost();
    ui->status->setText("Desconectado");

}


void MainWindow::on_Parar_clicked()
{
    ui->inipar->setText("Parar");
}


void MainWindow::on_Barratime_valueChanged(int value)
{
    ui->Tempo->setText(QString::number(value));
}

