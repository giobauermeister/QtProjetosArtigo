#include "screen2.h"
#include "ui_screen2.h"

#include <QHostAddress>
#include <QHostInfo>
#include <QDebug>

screen2::screen2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::screen2)
{
    ui->setupUi(this);

    ui->lbName->setText("hello " + QHostInfo::localHostName());
}

screen2::~screen2()
{
    delete ui;
}
