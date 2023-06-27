#include "StyleHelper.h"

QString StyleHelper::setButtonStyle()
{
	return 
		"QPushButton {"
		"	border-radius: 50%;"
		"}";
}

QString StyleHelper::setBackgroundStyle()
{

}

void StyleHelper::setAllButtonsStyle(Ui::MainWindow* ui)
{
	ui->playBtn->setStyleSheet(setButtonStyle());
	ui->nextTrackBtn->setStyleSheet(setButtonStyle());
	ui->prevTrackBtn->setStyleSheet(setButtonStyle());
	ui->stopTrackBtn->setStyleSheet(setButtonStyle());
	ui->muteBtn->setStyleSheet(setButtonStyle());
}
