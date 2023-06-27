#pragma once

#include <QString>
#include "ui_MainWindow.h"

class StyleHelper
{
public:
	static QString setButtonStyle();
	static QString setBackgroundStyle();
	static void setAllButtonsStyle(Ui::MainWindow* ui);
};

