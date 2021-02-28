
//Inclus la class qu'elle implémente
#include "tigre.h" 
    
//constructeur implémenté
Tigre::Tigre(string nom, float poids)
:Animaux(nom,poids){
        this->dieteViande=new Diete(poids*D);
        this->dieteFruit=new Diete(0);
        this->dieteHerbe =new Diete(0);
}
    
//Destructeur
Tigre::~Tigre(){
    cout<<"Destruction du tigre et de ses objets dietes:"<<endl;
    delete this->dieteFruit;
    delete this->dieteHerbe;
    delete this->dieteViande;
}

//GETTER
float Tigre::getDieteViande(){
     return this->dieteViande->getDiete();
}
float Tigre::getDieteFruit(){
     return this->dieteFruit->getDiete();
}
float Tigre::getDieteHerbe(){
     return this->dieteHerbe->getDiete();
}    
    
    
void Tigre::afficherAnimaux(){ //du moment que je mets animauxAfficher() est virtuel tout devrait etre ok...*************
        cout<<"Tigre: "<< this->nom <<" ("<< this->poids <<" Kg)\n\tMange "<<this->dieteViande->getDiete()<<" kg de viande par jour"
        <<"\n\tMange "<<this->dieteFruit->getDiete()<<" kg de fruits par jour"<<"\n\tMange "<<this->dieteHerbe->getDiete()<<" kg d'herbe par jour"<<endl;
};
    
    