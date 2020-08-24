#include <cstdlib>
#include <iostream>
#include "calculatrice.hpp"

void Calculatrice::init()
{
    operande_=0;
    courant_=0;
    operateur_=RIEN;
    statut_=true;
    saisie_=false;
}

void Calculatrice::plus()
{
    if(saisie_)
        egal(); //<=> this->egal()
    if(statut_)
    {
        operande_=courant_;
        operateur_=PLUS;
    }
    saisie_=false;
}

 void Calculatrice::moins()
 {
     if(saisie_)
         egal(); //<=> this->egal()
     if(statut_)
     {
         operande_=courant_;
         operateur_=MOINS;
     }
     saisie_=false;
 }

 void Calculatrice::div()
 {
     if(saisie_)
         egal(); //<=> this->egal()
     if(statut_)
     {
         operande_=courant_;
         operateur_=DIV;
     }
     saisie_=false;
 }

 void Calculatrice::mult()
 {
     if(saisie_)
         egal(); //<=> this->egal()
     if(statut_)
     {
         operande_=courant_;
         operateur_=MULT;
     }
     saisie_=false;
 }

 void Calculatrice::entrer(int i)
 {
     if(statut_)
     {
        courant_=i;
        saisie_=true;
     }
 }

 void Calculatrice::egal()
 {
     if(statut_)
     {
         switch(operateur_)
         {
            case RIEN:
                break;
            case PLUS:
                courant_+=operande_;
                break;
            case MOINS:
                courant_=operande_-courant_;
                break;
            case MULT:
                courant_*=operande_;
                break;
            case DIV:
                if(courant_)
                    courant_=operande_/courant_;
                else
                    statut_=false;
                break;
         }
     }
     saisie_=false;
 }

 int Calculatrice::courant()const
 {
     return courant_;
 }