#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

// тут ничего нового, сохраняй оригинальный main.cpp
int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
