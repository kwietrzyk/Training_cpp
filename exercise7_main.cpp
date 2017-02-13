#include "exercise7.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

int ilosc;
int tryb=0;
string imie;
int zaklad;
int wybor1, wybor2, wybor3;
int number, number2, number3;


ilosc=load_players();
Player * tab = new Player[ilosc];  //potem trzeba usunac tablice
load_names(tab, ilosc);


while (tryb!=4)
{
	for (int j=0; j<ilosc; j++)
	{
		
		if (tab[j].bilans!=0)
		{
		
		cout<<"\n\n"<<tab[j].name<<" wybiera tryb obstawiania numeru (0-4): \n0 - Zrezygnuj w tej rundzie \n1 - Obstaw pojedynczy numer \n2 - Obstaw jeden z trzech blokow(1-12, 13-24, 25-36) \n3 - Parzyste/nieparzyste  \n\n4 - Zakoncz gre"<<endl<<endl;
		cin>>tryb;
		mode(tryb);


		if (tryb==0)
			cout<<tab[j].name<<" rezygnuje z kolejki"<<endl;

		else if (tryb==1 || tryb==2 || tryb==3) 
		{ 	
			cout<<tab[j].name<<" ile kasy chcesz postawic? Aktualnie masz "<<tab[j].bilans<<endl;
			cin>>zaklad;
			available_cash(tab[j],zaklad);
			tab[j].bilans-=zaklad;
			tab[j].bets+=1;

			srand(time(NULL));
			int number = rand()%36+1;

			if (number< 13)
				number2=1;
			if (number>12 && number< 25)
				number2=2;
			if (number>24)
				number2=3;

			if (number%2==1)
				number3=1;
			else
				number3=2;

			switch(tryb)
			{

				case 1:
				{ 	cout<<tab[j].name<<" jaki numer z przedzialu 1-36 wybierasz? "<<endl;
					cin>>wybor1;
					cout<<"Wylosowany numer to: "<<number<<endl;
					if (wybor1==number)
					{
						tab[j].bilans+=(37*zaklad);
						tab[j].wins+=1;
						cout<<"Tym razem wygrales"<<endl;
					}
					else
					cout<<"Przegrales :("<<endl;
					break;
				}

				case 2:	
				{ 
					cout<<tab[j].name<<" ktory blok wybierasz? \n1-12 - wybierz 1 \n13-24 - wybierz 2 \n25-36 - wybierz 3"<<endl;
					cin>>wybor2;
					cout<<"Wylosowany numer to: "<<number<<". Byl w bloku "<<number2<<endl;
					if (wybor2==number2)
					{
						tab[j].bilans+=(4*zaklad);
						tab[j].wins+=1;
						cout<<"Tym razem wygrales"<<endl;
					}
					else
					cout<<"Przegrales :("<<endl;
					break;
				}

				case 3:	
				{ 
					cout<<tab[j].name<<" wybierz nieparzyste (1) lub parzyste (2)"<<endl;
					cin>>wybor3;
					cout<<"Wylosowany numer to: "<<number<<endl;
					if (wybor3==number3)
					{
						tab[j].bilans+=(2*zaklad);
						tab[j].wins+=1;
						cout<<"Tym razem wygrales"<<endl;
					}
					else
					cout<<"Przegrales :("<<endl<<endl;
					break;
				} 
			} //koniec switch
		} //koniec else if
	
		cout<<"Ilosc zakladow gracza "<<tab[j].name<<": "<<tab[j].bets<<endl;
		cout<<"Ilosc wygranych zakladow: "<<tab[j].wins<<endl<<endl;
		cout<<"Bilans gracza: "<<tab[j].bilans<<endl<<endl;

		} //koniec if

		else if (tryb==4)
			break;

	} //koniec for

	for (int i=0; i<ilosc; i++)
	{
		cout<<tab[i].name<<" ma "<<tab[i].bilans<<" dolcow"<<endl;
	}

} // koniec while


delete [] tab;
return 0;
}
