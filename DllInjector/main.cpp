#include "stdafx.h"
#include "widgets/mainframe.h"
#include <QtWidgets/QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
	Injector::ApplicationController appController(argc, argv);
 	return appController.exec();
}
