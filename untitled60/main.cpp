#include "topcontrol.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TopControl w;
    w.show();
    return a.exec();
}
