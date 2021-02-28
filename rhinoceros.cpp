#include "rhinoceros.h"

//constructeur
Rhinoceros::Rhinoceros(string nom, float poids, int espace)
:Animaux(nom,poids){
    //ESPACE
    if(espace<2000){
        this->espace=2000;
    }else{
        this->espace=espace;
    }
    //DIETE:fruit, herbe et viande.
    this->dieteFruit=new Diete(poids*D);
    this->dieteViande=new Diete(0);
    
    total_a_manger=this->poids*2/100;
    dispo_a_manger=this->espace*10/1000;
    
    //S'il n'est pas en mesure de manger 2% de son poids-> calcule de son supplément
    if (total_a_manger > dispo_a_manger){
            this->dieteHerbe= new Diete((total_a_manger-dispo_a_manger));
    }
    else
        this->dieteHerbe=new Diete(0);
}



//Destructeur
Rhinoceros::~Rhinoceros(){
    std::cout<<"Destruction du Rhinoceros et de ses objets dietes:"<<std::endl;
    delete this->dieteFruit;
    delete this->dieteHerbe;
    delete this->dieteViande;
}
    
//GETTER
float Rhinoceros::getDieteViande(){
     return this->dieteViande->getDiete();
}
float Rhinoceros::getDieteFruit(){
     return this->dieteFruit->getDiete();
}
float Rhinoceros::getDieteHerbe(){
     return this->dieteHerbe->getDiete();
}    
    
    
void Rhinoceros::afficherAnimaux(){
        cout<<"Rhinoceros: "<< this->nom <<" ("<< this->poids <<" kg)\n\tEnclos de "<<this->espace <<" metres-carres\n\tMange "<<this->dieteViande->getDiete()<<" kg de viande par jour"
        <<"\n\tMange "<<this->dieteFruit->getDiete()<<" kg de fruits par jour"<<"\n\tMange "<<this->dieteHerbe->getDiete()<<" kg d'herbe par jour"<<endl;
}