#ifndef CALCULATRICE_HPP
#define CALCULATRICE_HPP

class Calculatrice
{
    public:
    void init();
    void plus();
    void moins();
    void div();
    void mult();
    void entrer(int);
    void egal();
    int courant()const;
    
    private:
    enum Operateur{RIEN,DIV,PLUS,MOINS,MULT};
    int courant_;
    int operande_;
    bool statut_;
    bool saisie_;
    Operateur operateur_;
 
};

#endif /* CALCULATRICE_HPP */

