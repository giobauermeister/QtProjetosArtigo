#ifndef SCREEN2_H
#define SCREEN2_H

#include <QMainWindow>

namespace Ui {
class screen2;
}

class screen2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit screen2(QWidget *parent = 0);
    ~screen2();

private:
    Ui::screen2 *ui;
};

#endif // SCREEN2_H
