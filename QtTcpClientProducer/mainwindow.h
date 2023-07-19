#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimerEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
  void tcpConnect();
public slots:
    void putData();
    void timerEvent(QTimerEvent *event);
    void botIniciar();
    void botParar();
private slots:
    void on_botConectar_clicked();
    void on_botDesconectar_clicked();
    void on_minSlider_valueChanged(int value);
    void on_maxSlider_valueChanged(int value);
    void on_tempoSlider_valueChanged(int value);



private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int intervalo;
};

#endif // MAINWINDOW_H
