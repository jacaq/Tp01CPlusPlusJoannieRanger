//fichier mère de tigre, singe et rhino
#ifndef __ANIMAUX_H__
#define __ANIMAUX_H__

#include <iostream>
#include <string>
using namespace std;
//objet diete
#include "diete.h"

//description de la class avec les attibut qui y découlent. 
class Animaux {  //classe style abstraite de java
      protected:
           string nom; //le nom ne doit pas contenir d'espace
           float poids; //doit etre flottante
          //float diete;
            Diete* dieteViande=new Diete(0);
            Diete* dieteFruit=new Diete(0);
            Diete* dieteHerbe=new Diete(0);
      public:
    
            // Constructeur animaux.
            Animaux(string nom, float poids);
            
            //GETTER
            string getNom();
            float getPoids();
            
            //GETTER
            virtual float getDieteViande();
            virtual float getDieteFruit();
            virtual float getDieteHerbe();
            
            // Destructeur non-implémenté ici,
            virtual ~Animaux() {std::cout<<"Animal <"<<this->nom<<"> detruit"<<std::endl;}

            // Cette fonction permet d'afficher
            virtual void afficherAnimaux();
            
};

#endif // __ANIMAUX_H__