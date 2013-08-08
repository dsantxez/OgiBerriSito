/*
 * File:   main.cpp
 * Author: denis
 *
 * Created on August 8, 2013, 12:36 PM
 */

#include <QtGui/QApplication>

#include "mainWindow.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    
    mainWindow main;
    main.show();

    // create and show your widgets here

    return app.exec();
}
