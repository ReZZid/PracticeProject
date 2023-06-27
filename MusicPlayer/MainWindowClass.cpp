#include "MainWindowClass.h"
#include "StyleHelper.h"

MainWindowClass::MainWindowClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui = new Ui::MainWindow();
	ui->setupUi(this);
	setIntefaceStyle();
}

MainWindowClass::~MainWindowClass()
{}

void MainWindowClass::setIntefaceStyle()
{
	StyleHelper::setAllButtonsStyle(ui);
}