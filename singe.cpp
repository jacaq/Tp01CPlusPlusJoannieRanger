#include "singe.h"

//constructeur
Singe::Singe(string nom, float poids, bool enclos)
:Animaux(nom,poids){
    this->dieteViande=new Diete(poids*D);
    this->dieteFruit=new Diete(poids*D);
    this->enclos=enclos;
    
    //Si l'enclos est vide(false) on ajoute un suplément d'herbe de 0.5%(h) de son poids.
    if (enclos==false){
            this->dieteHerbe=new Diete(poids*H);
    }
    else
        this->dieteHerbe=new Diete(0);
}

//Destructeur
Singe::~Singe(){
    std::cout<<"Destruction du singe et de ses objets dietes:"<<endl;
    delete this->dieteFruit;
    delete this->dieteHerbe;
    delete this->dieteViande;
}

//GETTER
float Singe::getDieteViande(){
     return this->dieteViande->getDiete();
}

float Singe::getDieteFruit(){
     return this->dieteFruit->getDiete();
}

float Singe::getDieteHerbe(){
     return this->dieteHerbe->getDiete();
}    
    


//Methode afficherAnimaux()
void Singe::afficherAnimaux(){ 
        string etatEnclos="avec herbe";
        if(enclos==false)
            etatEnclos="sans herbe";
        cout<<"Singe: "<< this->nom <<" ("<< this->poids <<" kg)\n\tEnclos "<<etatEnclos<<"\n\tMange "<<this->dieteViande->getDiete()<<" kg de viande par jour"
        <<"\n\tMange "<<this->dieteFruit->getDiete()<<" kg de fruits par jour"<<"\n\tMange "<<this->dieteHerbe->getDiete()<<" kg d'herbe par jour"<<endl;
}
    