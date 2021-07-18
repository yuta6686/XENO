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

	//�v���C���[�̍ő�l��
	int GetPlayerMax() { return _player_max; }

	//
	//
	//
	//	�Q�[���̃T�C�N��
	void GameMainField();

	Player* CreatePlayer(int index);

private:

//  ���݂̃^�[����
	int _turn = 0;

//	�v���C���[�̍ő�l��
	 int _player_max;

};