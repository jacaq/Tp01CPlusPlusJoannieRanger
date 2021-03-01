//IMPLÉMENTATION DES METHODES/FONCTIONS D'ANIMAUX

//inclut le fichier mere avec prototype
#include "animaux.h"



        // Constructeur animaux implémenté.
        Animaux :: Animaux(string nom,float poids){
        this->nom=nom;
        this->poids=poids;
        }
    
        
        //GETTER
        string Animaux::getNom(){
            return this->nom;
        }      
        float Animaux:: getPoids(){
            return this->poids;
        }

        float Animaux::getDieteViande(){
            return this->dieteViande->getDiete();
           
        }
        float Animaux::getDieteFruit(){
             return this->dieteFruit->getDiete();
           
        }
        float Animaux::getDieteHerbe(){
             return this->dieteHerbe->getDiete();
           
        }

        // Cette fonction permet d'afficher
        void Animaux:: afficherAnimaux(){
            cout<<"Nom animal: "<< this->nom <<". Poids: "<< this->poids <<". Sa diete et son type ne sont pas definit. "<<endl;
            
        }


