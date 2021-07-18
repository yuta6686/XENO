#include "prepare.h"
#include "CreateDeck.h"
#include "Deck.h"
#include "Player.h"
#include <vector>
#include <iostream>
using namespace std;

void Prepare::MainPrepare(std::vector<Player>& player, Deck* deck, CreateDeck* cdeck)
{
	//�R�D�V���b�t��
	cdeck->Shuffle(deck,deck->deck_card_num,deck->GetNokori());
	deck->ShowDeck();


	//�l�����J�[�h����D�ɉ�����
	for (int i = 0; i < _player_num_max; i++) {
		if (!player.at(i).AddHandCard(player.at(i).DrawCard(deck)))
		{
			cout << "���߂ł���" << endl;
			return;
		}
	}
	

	//�l�����̃J�[�h��\��
	for (int i = 0; i < _player_num_max; i++) {
		player.at(i).ShowHand();
	}
	
}
