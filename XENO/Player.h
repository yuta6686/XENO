#pragma once

//-----------------------------------------------------------------------
//	[Player.h]
//										Author	:	Yanagisawa Yuta	
//										Data	:	2021/07/12
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
class Card;
class Deck;

class Player {
public:
	//コンストラクタ
	Player(int player_num):
		_player_num(player_num),_hCard(0){
		for (int i = 0; i < _card_max; i++)
			_pCard[i] = nullptr;
	}

	Player():_hCard(0) { 
		for (int i = 0; i < _card_max; i++)
			_pCard[i] = nullptr;
	}

	//デストラクタ
	~Player(){}

	// SelectCard
	//2枚のカードから1枚のカードインデックスを選択する
	//引数		（1枚目のカードインデックス、2枚目のカードインデックス）
	//戻り値	選択されたカードインデックス
	int SelectCard(int _first, int _second);

	//引数		カードのポインタ
	//戻り値　	追加できたらtrue
	//機能		手札にカードを加える
	bool AddHandCard(Card* pCard);

//	GetCard(int index)-----------------------
//	引数	カードのインデックス
//	戻り値	取り出したカードのポインタ
//	機能	カード情報表示などに使う
	Card* GetCard(int index) { return _pCard[index]; }

//	PutOutCard(int index)-------------------
//	引数	カードのインデックス
//	戻り値	取り出したカードの残りのポインタ
//	機能	手札からカードを取り出す
	Card* PutOutCard(int index);

//	DrawCard()------------------------------
//	引数	Deckのポインタ
//	戻値	引いたカードのポインタ
//	機能	一番上のカードの番号を取り出して
//			山札のカードを一枚減らす
	Card* DrawCard(Deck* deck);

	int GetPlayerNum() { return _player_num; }
	int GetHaveCard() { return _hCard; }
	int GetCardMax() { return _card_max; }

	void SetPlayerNum(int num) { _player_num = num; }
	void SetHaveCard(int num) { _hCard = num; }
private:
	//プレイヤー番号(1～４)
	int _player_num;

	//持っているカードの枚数（1or2)
	int _hCard;

	//持てるカードの枚数
	static const int _card_max = 2;

	//プレイヤーがカードを格納する場所（手札）
	Card* _pCard[_card_max];
};
