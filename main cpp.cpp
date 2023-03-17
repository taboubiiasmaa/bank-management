#include<iostream>
#include<conio.h>

#include<string>
using namespace std;
#include "Client.h"
int main()
{
	Client C();
	Client C3(43, "Amal","nasr","Mme",1998,"sfax",14234567);
	cout<< C3.getId()<<endl;
    C3.setId (444444);
	C3.afficheClient();
	cout<< C3.getId()<<endl;
	C3.afficheClient();
	return 0;
	
};



  


