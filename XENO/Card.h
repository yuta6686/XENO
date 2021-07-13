#pragma once
//-----------------------------------------------------------------------
//	[Card.h]
//										Author	:	Yanagisawa Yuta	
//										Data	:	2021/07/12
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
#include<string>

class Card {

private:
  //カード名　(numに応じて決まる)
	std::string _name;	

  //カードの番号
	int _num;			

public:

  //引数無しコンストラクタ
	Card() :_name("noname"),_num(0) {}

  //引数有りコンストラクタ
  //nameとnum
	Card(std::string _name, int _num) :_name(_name), _num(_num){}

  //ゲッター
	std::string GetName(){ return _name; }
	int GetNum(){ return _num; }

  //メンバ関数
	virtual void effect(int _num){}
};
