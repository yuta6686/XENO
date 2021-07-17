#pragma once
//-----------------------------------------------------------------------
//	[prepare.h]
//										Author	:	Yanagisawa Yuta	
//										Data	:	2021/07/12
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
#include <vector>
class Player;
class Deck;
class CreateDeck;

class Prepare {
private:
	int _player_num_max;

public:
	Prepare(int player_num):_player_num_max(player_num){}

	//	
	//	
	//	�l�����J�[�h���R�D�����D�ɉ�����
	void Hand();

	void MainPrepare(std::vector<Player>& player,Deck* deck,CreateDeck* cdeck);
};


