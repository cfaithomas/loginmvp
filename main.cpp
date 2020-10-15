#include <iostream>
#include <QtWidgets/QApplication>
#include "Presenter.h"

int main(int argc, char *argv[]) { //qt5 obligatoire
    QApplication app(argc, argv); //qt5 obligatoire
    Presenter *presenter=new Presenter(); //tous les objets en QT5 sont pointés
    return app.exec(); //qt5 obligatoire
}
