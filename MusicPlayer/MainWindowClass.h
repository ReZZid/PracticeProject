#pragma once

#include <QMainWindow>
#include "ui_MainWindow.h"

class MainWindowClass  : public QMainWindow
{
	Q_OBJECT
	Ui::MainWindow* ui;

public:
	MainWindowClass(QWidget *parent = nullptr);
	~MainWindowClass();
};
