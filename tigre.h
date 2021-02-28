#ifndef __TIGRE_H__
#define __TIGRE_H__

//son fichier parent(mère)
#include "animaux.h"  
#include "diete.h"

class Tigre: public Animaux{
    
    protected:
        //(Mange 5% de son poids)
        const float D= 0.05;
        //float diete;
        Diete* dieteViande;
        Diete* dieteFruit;
        Diete* dieteHerbe;
        
    public:
        //constructeur
        Tigre(string nom, float poids);

        //Destructeur
        ~Tigre();
        
        //GETTER
        float getDieteViande();
        float getDieteFruit();
        float getDieteHerbe();
        
        //methode d'affichage
        void afficherAnimaux();
        
        
};



#endif