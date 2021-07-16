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

	bool Shuffle(Deck* deck, int cn,int* noko);

	//カードを作る
	Card* Create();


	
	
private:
	//カード名　(numに応じて決まる)
	std::string _name;

	//カードの番号
	int _num;

	
};