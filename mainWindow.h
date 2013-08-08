/* 
 * File:   mainWindow.h
 * Author: denis
 *
 * Created on August 8, 2013, 12:37 PM
 */

#ifndef _MAINWINDOW_H
#define	_MAINWINDOW_H

#include "ui_mainWindow.h"

class mainWindow : public QDialog {
    Q_OBJECT
public:
    mainWindow();
    virtual ~mainWindow();
private:
    Ui::mainWindow widget;
};

#endif	/* _MAINWINDOW_H */
