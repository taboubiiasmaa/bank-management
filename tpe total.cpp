#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
long int nb_comptes=0;
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
    cout << "donner le numero de votre téléphone :" << num;
    cin >> num;
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
    void operation(void);
    float deposer(float montant);
	float retirer(float montant);
};
Compte::Compte ( )
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
void Compte::operation (void)
{
    int menu;   
    cout <<  "tapez 1 pour deposer l'argent'"<<menu << endl ;
    cout <<  "tapez 2 pour retirer l'argent'"<<menu << endl ;
    cin >> menu ;
    char a[10000];
    for (int op = 1 ; op<4; ++op)
    {
        
        
            if (menu == 1) { // deposer l'argent
               float montant;
               _solde += montant;
               char a[op] ="deposer";
               
                }
       
            if (menu == 2 ){ // retirer l'argent
                    float montant;
                    _solde -= montant;
                    char a[op]="retirer";
                   
                 }
    } 
	for (int i= 1; i<long(a[i]) ; --i)
	{   cout<<a[i] << endl;
        }
}    
float Compte :: deposer(float montant)            
{
    _solde += montant;
    
}
float Compte :: retirer(float montant)             
{
    _solde -= montant;
}



int main()
{
	Client C;
	Client C3(43, "Amal","nasr","Mme",1998,"sfax",14234567);
	Client C4(10, "waed","nasr","Mme",1997,"Tunis",24000000);
	cout<< C3.getId()<<endl;
    C3.setId (444444);
	C3.afficheClient();
	cout<< C3.getId()<<endl;
	C.afficheClient();
	C3.afficheClient();
	Compte c1(1,C4,20);
	Compte c2(1,C3,20);
	c1.affiche2();
    cout<<c1.deposer(10)<<endl;
	return 0;
	
}	



  


