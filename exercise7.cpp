#include "exercise7.h"
#include <iostream>

using namespace std;

Player::Player(string n, int bil, int b, int w)
{
	name=n;
	bilans=bil;
	bets=b;
	wins=w;

}

void load_names(Player * tablica, int ilosc)
{
for (int i=0; i<ilosc; i++)
{
	cout<<"Podaj imie "<<i+1<<". gracza: ";
	cin>>tablica[i].name;
}
}

void available_cash(Player & gracz, int & kwota)
{
	while (kwota<1 || gracz.bilans<kwota)
	{
		cout<<"Nie mozna tak robic. Podaj inna kwote"<<endl;
		cin>>kwota;
	}	
}

void mode(int & t)
{
	while (t<0 || t>4)
	{
		cout<<"Podaj prawidlowy tryb"<<endl;
		cin>>t;
	}
}

int load_players()
{
int ilosc;
cout<<"Wybierz liczbe graczy: "<<endl; //funkcja do wczytania liczby graczy
cin>>ilosc;
return ilosc;
}
