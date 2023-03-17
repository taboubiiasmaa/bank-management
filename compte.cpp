#include<iostream>
#include "Compte.h"
using namespace std;
Compte::Compte()
{ 
    
	_num =0;
	_solde =10;
}


Compte::Compte(long int num , Client c , float solde ) 
{
    cout << "donner le numero de CIN :" << num;
    cin >> num;
    _c =c;
	_solde=solde ;
}	
Client Compte::  getClient()
{
    return _c;
}
long int Compte::  getNum()
{
    return _num;
}
float Compte:: getSolde()
{
    return _solde;
}
void Compte:: setNum(long int n) 
{
    _num=n;
}
void Compte:: setClient(Client c)
{
    _c=c;
}
void Compte:: setSolde(float s)
{
    _solde=s;
}
void Compte::affiche2 (void)
{ 
    cout<<" le solde est" <<_solde <<" euros"<<endl;
} 
float Compte :: deposer(float montant)            
{    
    float N;
    float tab1[1000000];
    float tab2[1000000];
    for (int i= 1; i<N; i++)
    {
	
      
	
                    float montant;
                    _solde += montant;
					tab1[i]=_solde;
					 tab[i]=tab[i]+tab2[i];
					
			       
    }
	  
}
float Compte :: retirer(float montant)             
{    int N;
    float tab2[10000000000];

    for (int i= 1; i<N; i++)
    {
	   
	
                    float montant;
                    _solde -= montant;
					tab2[i]=_solde; 
			       
    }
}	 
void Compte :: affichoperation(void)
{int N,menu; 
float tab[10000000000000];


    cout <<  "tapez 1 pour deposer l'argent'"<<menu << endl ;
    cout <<  "tapez 2 pour retirer l'argent'"<<menu << endl ;
    cin >> menu ;
    for (int i= 1; i<N; i++){
	    if (menu == 1 ){ 
	       tab[i]=tab[i]+tab1[i];
	       } else{ 
	       tab[i]=tab[i]+tab2[i];
	       } 
        
for (int i= 1; i<long(a[i])-3 ; --i)
	{   cout<<"le solde apres"<<i<<"opeartion est "<< a[i] << endl;
        }
   
	

    
}

























	
