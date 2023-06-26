#include <QApplication>
#include "MainWindowClass.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	MainWindowClass mainWindow;
	mainWindow.show();
	return app.exec();
}