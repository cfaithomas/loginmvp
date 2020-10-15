//
// Created by eric on 15/10/2020.
//

#include <QtCore/QArgument>
#include "Utilisateur.h"



const QString &Utilisateur::getLogin() const {
    return login;
}

void Utilisateur::setLogin(const QString &login) {
    Utilisateur::login = login;
}



Utilisateur::Utilisateur():QObject() {} //attention appel au constructeur de niveau supérieur

void Utilisateur::setdatas(const QString &login, const QString &password) {
setLogin(login);
setPassword(password);
emit datasetted(); //emet le signal que les datas sont settées
}

const QString &Utilisateur::getPassword() const {
    return password;
}

void Utilisateur::setPassword(const QString &password) {
    Utilisateur::password = password;
}


