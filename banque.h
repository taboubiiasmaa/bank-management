#include<iostream>
#include<string>
#include<vector>


using namespace std;
#include"Compte.h"
class Banque
{
private:
	vector <Compte> info;
	
	
public:
	void ajoutcompte(  );
	void affichcompte();
	void affichercomptenum (int s);
	void Debiter(long int num, int x);
	void Crediter(int e1, int x1);
	void supprimercompte(int q);
	void virer(int i1, int i2, int s);
};


