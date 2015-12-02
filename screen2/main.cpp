#include "screen2.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    screen2 w;
    //w.show();
    w.showFullScreen();

    return a.exec();
}
