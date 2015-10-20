/********************************************************************************
** Form generated from reading UI file 'screen2.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN2_H
#define UI_SCREEN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_screen2
{
public:
    QWidget *centralWidget;
    QLabel *lbName;

    void setupUi(QMainWindow *screen2)
    {
        if (screen2->objectName().isEmpty())
            screen2->setObjectName(QStringLiteral("screen2"));
        screen2->resize(800, 480);
        centralWidget = new QWidget(screen2);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lbName = new QLabel(centralWidget);
        lbName->setObjectName(QStringLiteral("lbName"));
        lbName->setGeometry(QRect(10, 80, 761, 300));
        QFont font;
        font.setPointSize(50);
        lbName->setFont(font);
        lbName->setScaledContents(true);
        lbName->setAlignment(Qt::AlignCenter);
        lbName->setWordWrap(false);
        screen2->setCentralWidget(centralWidget);

        retranslateUi(screen2);

        QMetaObject::connectSlotsByName(screen2);
    } // setupUi

    void retranslateUi(QMainWindow *screen2)
    {
        screen2->setWindowTitle(QApplication::translate("screen2", "screen2", 0));
        lbName->setText(QApplication::translate("screen2", "hello", 0));
    } // retranslateUi

};

namespace Ui {
    class screen2: public Ui_screen2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN2_H
