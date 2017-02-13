#ifndef EXERCISE7_H
#define EXERCISE7_H
#include <string>

using namespace std;

class Player
{
	public: //zmienic na private
	string name;
	int bilans;
	int bets;
	int wins;

	public:
	Player(string="n", int=10, int=0, int=0);
	~Player(){}	

};

void load_names(Player * tablica, int ilosc);
void available_cash(Player & gracz, int & kwota);
void mode(int & t);
int load_players();

#endif
