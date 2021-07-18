#include "prepare.h"
#include "CreateDeck.h"
#include "Deck.h"
#include "Player.h"
#include <vector>
#include <iostream>
using namespace std;

void Prepare::MainPrepare(std::vector<Player>& player, Deck* deck, CreateDeck* cdeck)
{
	//山札シャッフル
	cdeck->Shuffle(deck,deck->deck_card_num,deck->GetNokori());
	deck->ShowDeck();


	//人数分カードを手札に加える
	for (int i = 0; i < _player_num_max; i++) {
		if (!player.at(i).AddHandCard(player.at(i).DrawCard(deck)))
		{
			cout << "だめでした" << endl;
			return;
		}
	}
	

	//人数分のカードを表示
	for (int i = 0; i < _player_num_max; i++) {
		player.at(i).ShowHand();
	}
	
}
