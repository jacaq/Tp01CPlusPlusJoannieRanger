#ifndef __RHINOCEROS_H__
#define __RHINOCEROS_H__

#include "animaux.h"  //son fichier parent(mère)
#include "diete.h"
using namespace std;

class Rhinoceros: public Animaux{
    
protected:
    //mange 0.5/100 de son poids en fruits.
    const float D=0.5/100;
    int espace;
    Diete* dieteViande;
    Diete* dieteFruit;
    Diete* dieteHerbe;
    
    //Pour les calculs
    float total_a_manger;
    float dispo_a_manger;

public:
    //constructeur
    Rhinoceros(string nom, float poids, int espace);
    
    //Destructeur
    ~Rhinoceros();
    
    //GETTER
    float getDieteViande();
    float getDieteFruit();
    float getDieteHerbe();

    void afficherAnimaux();
    
    
};



#endif 