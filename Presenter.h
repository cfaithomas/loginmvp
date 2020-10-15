//
// Created by eric on 15/10/2020.
//

#ifndef LOGINMVP_PRESENTER_H
#define LOGINMVP_PRESENTER_H


#include "Utilisateur.h"
#include "Fenetre.h"

class Presenter:public QObject {
Q_OBJECT
private:
    Utilisateur *utilisateur;
    Fenetre *fenetre;

public:
    Presenter();

public  slots:
    void test(); //test le login
    void setDatasinModel(); //met à jours les données dans le model
    void raz(); //efface les QLineEdit



};


#endif //LOGINMVP_PRESENTER_H
