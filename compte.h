#include "client.h"
#include<iostream>
#include<string>
using namespace std;
class Compte
{
private:
	
	long int _num;
	Client _c;
	float _solde;
    
    

public:
	Compte(); 
	Compte(long int num, Client c , float solde ) ;
	Client getClient();
    long int getNum() ;
    float getSolde() ;
    void setClient(Client c);
    void setNum(long int n) ;
    void setSolde(float s);
    void affiche2(void);
    void affichoperation(void);
    float deposer(float montant);
	float retirer(float montant);
};
