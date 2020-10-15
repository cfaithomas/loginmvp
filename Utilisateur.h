//
// Created by eric on 15/10/2020.
//

#ifndef LOGINMVP_UTILISATEUR_H
#define LOGINMVP_UTILISATEUR_H


#include <QtCore/QString>
#include <QtCore/QObject>

class Utilisateur:public QObject {
Q_OBJECT //permet d'utiliser des commande non C++
private:
    QString login; //utilisation des types spécifiques QT
    QString password;

public:
    Utilisateur();

    void setdatas(const QString &login,const QString &password); //set les deux données en même temps

    const QString &getLogin() const;

    void setLogin(const QString &login);


    const QString &getPassword() const;

    void setPassword(const QString &password);
    signals:
    void datasetted();

};


#endif //LOGINMVP_UTILISATEUR_H
