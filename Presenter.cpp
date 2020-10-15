//
// Created by eric on 15/10/2020.
//

#include <QtWidgets/QMessageBox>
#include "Presenter.h"

Presenter::Presenter() :QObject(){
    /****************instanciation du modele et de la vue**************/
    fenetre=new Fenetre();
    utilisateur=new Utilisateur();
    /******************Connection des signaux et des slots***********************************/
    QObject::connect(fenetre->getOk(),&QPushButton::clicked, this,&Presenter::setDatasinModel);
    QObject::connect(utilisateur,&Utilisateur::datasetted, this, &Presenter::test);
    QObject::connect(fenetre->getRaz(),&QPushButton::clicked,this,&Presenter::raz);
    fenetre->show();
}

void Presenter::setDatasinModel() {
    //metjour le modele recupere dans la vue la saisie dans login et dans password
 utilisateur->setdatas(fenetre->getLogin()->text(),fenetre->getPassword()->text());
}

void Presenter::test() {
    if(utilisateur->getLogin()=="Admin"&&utilisateur->getPassword()=="mypass")
    {
        QMessageBox::information(fenetre, "Informations", "Identifiants valides");
    }
    else{
        QMessageBox::information(fenetre, "Informations", "Identifiants invalides");
    }

}

void Presenter::raz() {
    fenetre->getLogin()->clear();
    fenetre->getPassword()->clear();

}





