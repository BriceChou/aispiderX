#ifndef AISPIDERX_H
#define AISPIDERX_H

#include <QtWidgets/QMainWindow>
#include "ui_aispiderx.h"

class AispiderX : public QMainWindow
{
	Q_OBJECT

public:
	AispiderX(QWidget *parent = 0);
	~AispiderX();

private:
	Ui::AispiderXClass ui;
};

#endif // AISPIDERX_H
