#ifndef __SINGE_H__
#define __SINGE_H__

//Son fichier parent(mère)
#include "animaux.h"  
#include "diete.h"


class Singe: public Animaux{
    
    protected:
       //constante pour le calcul de sa diete.
       //(mange 1% de son poids en viande et en fruit)
        const float D=0.01;
        //(mange 0.5% de son poids en herbe)
        const float H=0.5/100;
        
        //Pointeur de type diete;
        Diete* dieteViande;
        Diete* dieteFruit;
        Diete* dieteHerbe;
      
        //etat de l'enclos: si Vide d'herbe=true ajout de 0,5% poids en herbes à sa diete
        bool enclos;

    
    public:
        //constructeur
        Singe(string nom, float poids,bool enclos);

        //Destructeur
        ~Singe();
        
        //GETTER
        float getDieteViande();
        float getDieteFruit();
        float getDieteHerbe();
                
        //Méthode d'affichage
        void afficherAnimaux();
    
    
};



#endif
