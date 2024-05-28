#include "mainwindow.h"

#include <QApplication>
#include <QToolBar>
#include <QAction>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QToolBar* toolbar = w.addToolBar("Main Window Toolbar");
    QAction fileAction("File", &w);
    QAction helpAction("Help", &w);
    toolbar->addAction(&fileAction);
    toolbar->addAction(&helpAction);
    w.show();
    return a.exec();
}
