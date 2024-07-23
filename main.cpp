#include "demoqt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    demoqt w;
    w.show();
    return a.exec();
}
