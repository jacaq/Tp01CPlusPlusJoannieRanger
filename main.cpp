/**
 * Travail pratique 1 (c++) par Joannie Ranger, 1er mars 2021.
 * Programmation orientée objet et technologies Web (LEA.3N, version 2012).
 * Concepts de structuration des données informatiques (420-977-RO).
 * 
 */

//La librairies à importer qui n'est pas déjà dans le fichier de la classe mère __Animaux_h__:
#include<string.h> 

//Les fichiers du projet:
#include "animaux.h"
#include "tigre.h"
#include "singe.h"
#include "rhinoceros.h"
#include "diete.h"


//Prototypes des fonctions implémentées à la suite du main.
int espaceRhinoceros(int espace);
bool singeEnclos(bool enclosRemplit);
float poidsAnimal(float poids);
string nomAnimal(string nom);


int main()
{
    //Déclaration du tableau de pointeurs dynamique de type Animaux(classe mère).
    Animaux* tableau [250]; //on doit y mettre des pointeurs
    
    //Compteur pour le nombre d'animaux dans le zoo
    int compteur=0;
    
    //titre du menu
    string titreMenu="==========================================================================================\n\t\t\t\t\tMENU ZOO\n==========================================================================================";
    
    //variable pour le choix du switch
    char choix;

    //variable pour les fonctions
    string nom; float poids=0; bool enclosRemplit; int espace=0;
    
    do{ cout<<titreMenu<<endl;
        printf("\nFaites votre choix parmis les options suivantes:\n");
        puts("\t1- Ajouter un tigre avec ses informations.");
        puts("\t2- Ajouter un singe avec ses informations.");
        puts("\t3- Ajouter un rhinoceros avec ses informations.");
        puts("\t4- Option affichage du compte rendu du parc.\n\t   (Nombre d'animaux, leurs dietes quotiennes, total diete a prevoir en commande)");
        puts("\t5- Pour supprimer un animal");
        puts("\t0- Pour quitter");
        cout<<"\nEntrer votre choix: ";
        cin>>choix;

        if (choix<'0'||choix>'5') {
                //si entrée n'est pas parmis le choix: message d'erreur.
                puts("***Mauvaise entrée***\nVeuillez entrer un code parmis le choix proposé:");
        }
        int choix2=0;
        switch(choix){
            
            case '1'://Création d'un tigre.
                    do{
                        puts("=========Ajout d'un tigre========");
                        nom=nomAnimal(nom);
                        poids=poidsAnimal(poids);
                        tableau[compteur]=new Tigre(nom,poids);
                        compteur++;
                        puts("\n\t1- Pour entrer un autre tigre.\n\t2- Pour terminer.\n");
                        cin>>choix2;
                    }while (choix2==1);
                    break;
                    
            case '2'://Création d'un singe.
                    do{
                        puts("=========Ajout d'un singe========");
                        nom=nomAnimal(nom);
                        poids=poidsAnimal(poids);
                        enclosRemplit=singeEnclos(enclosRemplit);
                        tableau[compteur]=new Singe(nom,poids,enclosRemplit);
                        compteur++;
                        puts("\n\t1- Pour entrer un autre singe.\n\t2- Pour terminer.\n");
                        cin>>choix2;
                    }while (choix2==1);
                    break;
                    
            case '3'://Création d'un rhinoceros
                    do{
                        puts("========Ajout d'un rhinoceros======");
                        nom=nomAnimal(nom);
                        poids=poidsAnimal(poids);
                        espace=espaceRhinoceros(espace);
                        tableau[compteur]=new Rhinoceros(nom,poids,espace); 
                        compteur++;
                        puts("\n\t1- Pour entrer un autre rhinoceros.\n\t2- Pour terminer.\n");
                        cin>>choix2;
                    }while (choix2==1);
                    break;
                    
            case '4'://Affichage du compte-rendu
                    double totalViande, totalFruit, totalHerbe;
                    char touche;
                    puts("\n\n===================================Compte-rendu du Zoo===================================\n"); 
                    if (compteur>0){
                        for(int i=0;i<compteur;i++){
                            
                            if(i==0){
                                totalViande=0; 
                                totalFruit=0; 
                                totalHerbe=0;
                            }
                            //Affichage par animal:
                            tableau[i]->afficherAnimaux();
                            
                            //Calcul des totaux:
                            totalViande+=(tableau[i]->getDieteViande());
                            totalFruit+=(tableau[i]->getDieteFruit());
                            totalHerbe+=(tableau[i]->getDieteHerbe()); 
                        }
                        puts("\nDiete quotidienne total a prévoir pour le zoo: ");
                        cout<<"Viande : "<<totalViande<<" kg"<<endl;
                        cout<<"Fruit : "<<totalFruit<<" kg"<<endl;
                        cout<<"Herbe : "<<totalHerbe<<" kg"<<endl;
                        puts("\nEntrez caractere pour terminer.\n");
                        cin>>touche;
                    
                    }
                    else
                        puts("\n\t\t\t****Aucunes donnees d'entree****\n\t\t   Vous etes redirigez vers le menu d'acceuil\n");
                    break;
            case '5':
            {       //Suppression d'un animal selon un nom entrée.
                    puts("\n\n==============================Supression d'un animal du Zoo==============================\n");
                    string nomDonnee, nomTableau; int position;
                    if (compteur>0){
                        puts("Entrez le nom de l'animal a supprimer de la base de donnee:");
                        cin>>nomDonnee;
                        bool trouver=false;
                        for(int i=0;i<compteur;i++){
                            
                            nomTableau=tableau[i]->getNom();
                            if(nomDonnee==nomTableau){
                                cout<<nomDonnee<<" a ete trouvee et supprimer!"<<endl;
                                trouver=true;
                                position=i;
                                //Si l'élément se trouve à la derniere position du tableau entrée
                                if (position==compteur)   
                                    tableau[position]=0;
                                else{   
                                        for(int j=position;j<compteur-1;j++){
                                            tableau[j]=tableau[j+1];
                                        }
                                    
                                }
                                compteur--; 
                            }
                            
                           
                        }
                        if(trouver==false)
                                cout<<nomDonnee<<" n'a pas ete trouvee. Suppression impossible!"<<endl;
                       
                    }
                    else
                        puts("\n\t\t\t****Aucunes donnees d'entree****\n\t\t   Vous etes redirigez vers le menu d'acceuil\n");
                        
                   break;   
            }
            case '0':
                   break; 
        }
                
    //Fin du do-while du menu.
    }while(choix!='0');
    
    if (compteur!=0)
        puts("\n\nFermeture du programe et supression des donnees");
    else
        puts("\n\n\t\t\t\t---Fin du programme---\n");
    
    //boucle de suppresin des pointeurs
    for(int i=0; i<compteur;i++){
            delete *(tableau+i);
    }
    
	return 0;
}





//Fonctions pour notre programme:

//Question 1: pour retourner le nom de l'animal:
string nomAnimal(string nom){
    puts("\n1-) Inscrivez le nom de l'animal: ");
    cin>>nom;
    return nom;
}

//Question 2: pour retourner le pois de l'animal:
float poidsAnimal(float poids){
    puts("\n2-) Incrivez le poids de l'animal: ");
    cin>>poids;
    return poids;
}

//Question 3(Singe): pour retourner si l'enclos du singe a de l'herbe ou non:
bool singeEnclos(bool enclosRemplit){
    bool x; int res=1;
    string strOui="Oui",strNon="non",resultatTest;
    do{
        cout<<("\n3-) L'enclos est-il remplit d'herbe? (Entrez: oui ou non)")<<endl;
        cin>>resultatTest;
        
        if((resultatTest==strOui)==0){
            x=false;
            res=0;
        }
        if((resultatTest==strNon)==0){
            x=true;
            res=0;
        }
    }while( res!=0 );
    return x;
}

//Question 3(Rhinoceros): pour retourner l'espace de l'enclos:
int espaceRhinoceros(int espace){
    puts("\n3-) Entrez l'espace, en entier, du rhinoceros:");
    cin>>espace;
    return espace;
}

