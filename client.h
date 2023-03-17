#include<iostream>
#include<string>
using namespace std;
#ifndef CLIENT__H__
#define CLIENT__H__
class Client
{
private:
	
	long int _id ;
    string _nom ;
    string _prenom ;
    string _sexe ;
    int _naissance ;
    string _adresse;
    long int _numt;
    

public:
	Client(); 
	Client(long int identifiant, string nom  , string prenom , string sexe ,int naissance , string adresse , long int num ) ;
    long int getId() ;
    string getNom() ;
    string getPrenom() ;
    string getSexe() ;
    int getNaissance() ;
    string getAdresse() ;
    long int getNumt() ;
    void setId(long int x) ;
    void setNom(string y);
    void setPrenom(string z);
    void setSexe(string w);
    void setNaissance(int c);
    void setAdresse (string a );
    void setNumt(long int t);
    void afficheClient (void);
    
	
};
#endif

