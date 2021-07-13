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



	//カードを作る
	Card* Create();
	
private:
	//カード名　(numに応じて決まる)
	std::string _name;

	//カードの番号
	int _num;

	//残りの枚数
	int nokori[11] = { 0,2,2,2,2,2,2,2,2,1,1 };

	
};