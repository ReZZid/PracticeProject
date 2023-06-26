#include "MainWindowClass.h"

MainWindowClass::MainWindowClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui = new Ui::MainWindow();
	ui->setupUi(this);
}

MainWindowClass::~MainWindowClass()
{}
