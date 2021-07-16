#include "Deck.h"
#include "Card.h"
#include <iostream>
using namespace std;

bool Deck::Add_Card(Card* pCard)
{
	for (int i = 0; i < Card_Max; i++) {
		if (!mp_cards[i]) {
			mp_cards[i] = pCard;
			return true;
		}
	}
	return false;
}

bool Deck::DeleteCard(int index)
{
	if (index < 0 || index >= Card_Max)return false;

	if (mp_cards[index] == nullptr)return false;
	delete mp_cards[index];
	mp_cards[index] = nullptr;

	return true;
}

void Deck::ShowDeck()
{
	if (!mp_cards)return;
	for (int i = 0; i < deck_card_num; i++) {
		cout << "y" << i+1 << "z";
		cout << mp_cards[i]->GetNum() << ":y";
		cout << mp_cards[i]->GetName() <<"z" << endl;
	}
}
