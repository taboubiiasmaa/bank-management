#include<iostream>
#include<string>
#include<vector>
#include"banque.h"
#include<conio.h>
using namespace std;	   
void Banque::ajoutcompte( )
{ 
int menu,N ;
string Sexe,Prenom,Nom,adresse;
long int solde;

cout <<  "tapez 1  si le cmpte existe "<<menu << endl ;
cin>>menu;
if (menu==1)
{
vector <Compte> info;	
}else
   {for (int j=0  ; j < N; ++j)
    cout<<"saisir le Nom:"<<endl;
	cin>> Nom ;
	cout<<"saisir le Prenom:"<<endl;
	cin>> Prenom ;
	cout<<"saisir le Sexe(Mr or Mme):"<<endl;
	cin>> Sexe ;
	cout<<"saisir l'adresse':"<<endl;
	cin>> adresse ;
	cout<<"saisir le solde initial:"<<endl;
	cin>> solde ;
	} 
} 
void Banque::affichcompte ()
{ 
int N;
for (int j=0  ; j < N; ++j)
    { 
     cout << info[j] << endl;
}
void Banque:: Debiter(long int num, int x)
 { cout<<"donnez le numero d'un CIN d'un compte existants s'il vous plait"<<endl;
   
 
   
  
 }


   



