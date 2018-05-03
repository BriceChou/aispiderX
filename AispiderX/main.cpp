#include "aispiderx.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	AispiderX w;
	w.show();
	return a.exec();
}
