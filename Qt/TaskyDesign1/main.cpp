#include "taskydesign.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Q_INIT_RESOURCE(taskydesign1);
	TaskyDesign w;
	w.show();
	return a.exec();
}
