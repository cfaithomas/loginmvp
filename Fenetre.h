//
// Created by eric on 15/10/2020.
//

#ifndef LOGINMVP_FENETRE_H
#define LOGINMVP_FENETRE_H


#include <QtWidgets/QFrame>

#include <QtWidgets/QPushButton>
#include <QtWidgets/QLineEdit>

class Fenetre : public QFrame{ //hérite de Qframe c'est une fenetre

    private:
    QLineEdit *login;
    QLineEdit *password;
    QPushButton *ok;
    QPushButton *raz;

    public:

    Fenetre();

    QPushButton *getOk() const;

    QPushButton *getRaz() const;

    QLineEdit *getLogin() const;

    QLineEdit *getPassword() const;

};


#endif //LOGINMVP_FENETRE_H
