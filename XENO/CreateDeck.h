#pragma once
//-----------------------------------------------------------------------
//	[CreateDeck.h]
//										Author	:	Yanagisawa Yuta	
//										Data	:	2021/07/12
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
#include<string>
class Card;
class Deck;

class CreateDeck {
public:
	CreateDeck():_name("none"),_num(0){}
	CreateDeck(std::string name,int num):
		_name(name),_num(num){}
	~CreateDeck(){}

	bool Shuffle(Deck* deck, int cn);



	//�J�[�h�����
	Card* Create();
	
private:
	//�J�[�h���@(num�ɉ����Č��܂�)
	std::string _name;

	//�J�[�h�̔ԍ�
	int _num;

	//�c��̖���
	int nokori[11] = { 0,2,2,2,2,2,2,2,2,1,1 };

	
};