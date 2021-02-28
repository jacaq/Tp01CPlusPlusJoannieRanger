
#ifndef __DIETE_H__
#define __DIETE_H__


#include <string>


class Diete{
    private:
        float diete;

    public:
        Diete(float calcule){
            this->diete=calcule;
        }
        
        ~Diete(){
            std::cout<<"destruction diete"<<endl;}
            
        //GETTER
        float getDiete(){
                return this->diete;
        }

};

#endif