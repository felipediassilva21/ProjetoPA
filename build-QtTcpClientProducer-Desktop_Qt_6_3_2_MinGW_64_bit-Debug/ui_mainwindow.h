/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *botConectar;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *botDesconectar;
    QLabel *label_2;
    QSlider *minSlider;
    QLCDNumber *min;
    QSlider *maxSlider;
    QLabel *label_3;
    QLCDNumber *max;
    QLabel *label_4;
    QSlider *tempoSlider;
    QLabel *tempo;
    QLabel *label_5;
    QTextBrowser *Valores;
    QPushButton *botIniciar;
    QPushButton *botParar;
    QMenuBar *menuBar;
    QMenu *menuProdutor;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(379, 328);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        botConectar = new QPushButton(centralWidget);
        botConectar->setObjectName(QString::fromUtf8("botConectar"));
        botConectar->setGeometry(QRect(10, 40, 81, 29));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 16, 16));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 10, 151, 22));
        botDesconectar = new QPushButton(centralWidget);
        botDesconectar->setObjectName(QString::fromUtf8("botDesconectar"));
        botDesconectar->setGeometry(QRect(100, 40, 81, 29));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 31, 16));
        minSlider = new QSlider(centralWidget);
        minSlider->setObjectName(QString::fromUtf8("minSlider"));
        minSlider->setGeometry(QRect(10, 100, 111, 22));
        minSlider->setOrientation(Qt::Horizontal);
        min = new QLCDNumber(centralWidget);
        min->setObjectName(QString::fromUtf8("min"));
        min->setGeometry(QRect(130, 100, 51, 23));
        maxSlider = new QSlider(centralWidget);
        maxSlider->setObjectName(QString::fromUtf8("maxSlider"));
        maxSlider->setGeometry(QRect(10, 150, 111, 22));
        maxSlider->setMinimum(1);
        maxSlider->setMaximum(100);
        maxSlider->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 130, 31, 16));
        max = new QLCDNumber(centralWidget);
        max->setObjectName(QString::fromUtf8("max"));
        max->setGeometry(QRect(130, 150, 51, 23));
        max->setProperty("intValue", QVariant(1));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 180, 51, 16));
        tempoSlider = new QSlider(centralWidget);
        tempoSlider->setObjectName(QString::fromUtf8("tempoSlider"));
        tempoSlider->setGeometry(QRect(10, 200, 141, 22));
        tempoSlider->setMinimum(1);
        tempoSlider->setMaximum(100);
        tempoSlider->setValue(1);
        tempoSlider->setOrientation(Qt::Horizontal);
        tempoSlider->setTickInterval(0);
        tempo = new QLabel(centralWidget);
        tempo->setObjectName(QString::fromUtf8("tempo"));
        tempo->setGeometry(QRect(160, 200, 21, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 260, 81, 16));
        Valores = new QTextBrowser(centralWidget);
        Valores->setObjectName(QString::fromUtf8("Valores"));
        Valores->setGeometry(QRect(190, 10, 181, 261));
        botIniciar = new QPushButton(centralWidget);
        botIniciar->setObjectName(QString::fromUtf8("botIniciar"));
        botIniciar->setGeometry(QRect(10, 230, 81, 24));
        botParar = new QPushButton(centralWidget);
        botParar->setObjectName(QString::fromUtf8("botParar"));
        botParar->setGeometry(QRect(100, 230, 81, 24));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 379, 22));
        menuProdutor = new QMenu(menuBar);
        menuProdutor->setObjectName(QString::fromUtf8("menuProdutor"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuProdutor->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        botConectar->setText(QCoreApplication::translate("MainWindow", "Conectar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP:", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        botDesconectar->setText(QCoreApplication::translate("MainWindow", "Desconectar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Min:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Max:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Tempo(s):", nullptr));
        tempo->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Desconectado", nullptr));
        botIniciar->setText(QCoreApplication::translate("MainWindow", "Iniciar", nullptr));
        botParar->setText(QCoreApplication::translate("MainWindow", "Parar", nullptr));
        menuProdutor->setTitle(QCoreApplication::translate("MainWindow", "Produtor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
