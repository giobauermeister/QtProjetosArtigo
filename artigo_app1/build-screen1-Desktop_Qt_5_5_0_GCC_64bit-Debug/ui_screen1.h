/********************************************************************************
** Form generated from reading UI file 'screen1.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN1_H
#define UI_SCREEN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_screen1
{
public:
    QWidget *centralWidget;
    QPushButton *btnON;
    QPushButton *btnOFF;
    QLabel *ledON;
    QLabel *ledOFF;

    void setupUi(QMainWindow *screen1)
    {
        if (screen1->objectName().isEmpty())
            screen1->setObjectName(QStringLiteral("screen1"));
        screen1->resize(800, 480);
        centralWidget = new QWidget(screen1);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QStringLiteral("background-color: rgb(70, 70, 70);"));
        btnON = new QPushButton(centralWidget);
        btnON->setObjectName(QStringLiteral("btnON"));
        btnON->setGeometry(QRect(270, 250, 250, 150));
        btnON->setFocusPolicy(Qt::NoFocus);
        btnON->setContextMenuPolicy(Qt::NoContextMenu);
        btnON->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/on_btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnON->setIcon(icon);
        btnON->setIconSize(QSize(200, 200));
        btnON->setFlat(false);
        btnOFF = new QPushButton(centralWidget);
        btnOFF->setObjectName(QStringLiteral("btnOFF"));
        btnOFF->setGeometry(QRect(270, 250, 250, 150));
        btnOFF->setFocusPolicy(Qt::NoFocus);
        btnOFF->setContextMenuPolicy(Qt::NoContextMenu);
        btnOFF->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/off_btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOFF->setIcon(icon1);
        btnOFF->setIconSize(QSize(200, 200));
        btnOFF->setFlat(false);
        ledON = new QLabel(centralWidget);
        ledON->setObjectName(QStringLiteral("ledON"));
        ledON->setGeometry(QRect(350, 70, 100, 100));
        ledON->setPixmap(QPixmap(QString::fromUtf8(":/images/led-red-control-md.png")));
        ledON->setScaledContents(true);
        ledOFF = new QLabel(centralWidget);
        ledOFF->setObjectName(QStringLiteral("ledOFF"));
        ledOFF->setGeometry(QRect(350, 70, 100, 100));
        ledOFF->setPixmap(QPixmap(QString::fromUtf8(":/images/red-led-off-md.png")));
        ledOFF->setScaledContents(true);
        screen1->setCentralWidget(centralWidget);
        ledON->raise();
        btnON->raise();
        btnOFF->raise();
        ledOFF->raise();

        retranslateUi(screen1);

        QMetaObject::connectSlotsByName(screen1);
    } // setupUi

    void retranslateUi(QMainWindow *screen1)
    {
        screen1->setWindowTitle(QApplication::translate("screen1", "screen1", 0));
        btnON->setText(QString());
        btnOFF->setText(QString());
        ledON->setText(QString());
        ledOFF->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class screen1: public Ui_screen1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN1_H
