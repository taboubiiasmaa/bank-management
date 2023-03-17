#include <iostream>
#include<string>
#include "Client.h"
using namespace std;
Client::Client ( )
{   
	_id =22222222;
	_nom ="Samir";
    _prenom="Tag" ;
    _sexe="Mr" ;
    _naissance=1996 ;
    _adresse="Tunis";
    _numt=24111111;
}
Client::Client(long int id , string nom  , string prenom , string sexe ,int naissance , string adresse , long int num ) 
{
    cout << "donner le numero de votre téléphone :" << id;
    _id=id;
    _nom =nom;
	_prenom=prenom ;
	_sexe=sexe ;
    _naissance=naissance ;
    _adresse=adresse;
    _numt=num;
}
	
long int Client:: getId() 
{
    return _id;
}
string Client:: getNom()
{
    return _nom;
}
string Client:: getPrenom()
{
    return _prenom;
}
string Client:: getSexe()
{
    return _sexe;
}
int Client::  getNaissance()
{
    return _naissance;
}
string Client::  getAdresse ()
{
    return _adresse;
}
long int Client:: getNumt()
{
    return _numt;
}
void Client:: setId(long int x) 
{
    _id=x;
}
void Client:: setNom(string y)
{
    _nom=y;
}
void Client:: setPrenom(string z)
{
    _prenom=z;
}
void Client:: setSexe(string w)
{
    _sexe=w;
}
void Client::  setNaissance(int c)
{
    _naissance=c;
}
void Client::  setAdresse (string a )
{
    _adresse=a;
}
void Client:: setNumt(long int t)
{
    _numt=t;
}
void Client::afficheClient (void)
{ 
    cout<<" l'identifiant est" <<_id <<endl;
    cout<<" le nom de personne est  "<<_nom<<endl;
    cout<<" le prenom de personne est  "<<_prenom<<endl;
    cout<<" le sexe(Mr ou Mme) est"<<_sexe<<endl;
    cout<<" année de naissance est"<<_naissance<<endl;
    cout<<" l'adresse est"<<_adresse<<endl;
    cout<<" le numéro de téléphone est"<<_numt<<endl;
} 
