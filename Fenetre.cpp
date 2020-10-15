//
// Created by eric on 15/10/2020.
//

#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include "Fenetre.h"

Fenetre::Fenetre() : QFrame() {
    QFormLayout *layout=new QFormLayout(); //gestionnaire de placement
    /**************instanciation des widgets*************/
    login=new QLineEdit();
    password=new QLineEdit();
    password->setEchoMode(QLineEdit::Password);//passe en mode password
    ok=new QPushButton("OK");
    raz=new QPushButton("RAZ");
    /*************o places dans la fenetre les différents composants**************/
    layout->addRow(new QLabel("login"),login);
    layout->addRow(new QLabel("Password"),password);
    layout->addRow(ok);
    layout->addRow(raz);
    setLayout(layout); //met en place le gestionnaire de placement
}

QPushButton *Fenetre::getOk() const {
    return ok;
}

QPushButton *Fenetre::getRaz() const {
    return raz;
}

QLineEdit *Fenetre::getLogin() const {
    return login;
}

QLineEdit *Fenetre::getPassword() const {
    return password;
}
