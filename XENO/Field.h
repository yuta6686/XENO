#pragma once
//-----------------------------------------------------------------------
//	[Field.h]
//										Author	:	Yanagisawa Yuta	
//										Data	:	2021/07/12
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
class Player;

class Field {
public:
	Field():_turn(0),_player_max(2){}
	~Field(){

	}

	int InputPlayerMax();

	//プレイヤーの最大人数
	int GetPlayerMax() { return _player_max; }

	//
	//
	//
	//	ゲームのサイクル
	void GameMainField();

	Player* CreatePlayer(int index);

private:

//  現在のターン数
	int _turn = 0;

//	プレイヤーの最大人数
	 int _player_max;

};