#pragma once
#ifndef DECK
#define DECK
//-----------------------------------------------------------------------
//	[]
//										Author	:	Yanagisawa Yuta	
//										Data	:	
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
class Card;
class Deck {
private:
  //山札カードの最大値
	static const int Card_Max = 18;		

  //カードを格納する場所
	Card* mp_cards[Card_Max];	

public:
	Deck() {
		for (int i = 0; i < Card_Max; i++)
			mp_cards[i] = nullptr;
	}
	~Deck() {
		for (int i = 0; i < Card_Max; i++)
			DeleteCard(i);
	}

  //カードを登録する（シャッフルして）
	bool Add_Card(Card* pCard);	

	bool DeleteCard(int index);

	Card* GetCard(int index) { return mp_cards[index]; }

  //転生札の設定
	//void ReinCard();	

/*  ゲッター  */

  //デッキにあるカードの枚数の取得
	//int Get_deck_card_num(){ return deck_card_num; }

	//現在の山札のカード枚数
	int deck_card_num = Card_Max;

  //Card_Max(=18)を取得
	int Get_card_num_max() { return Card_Max; }

	void ShowDeck();
};
#endif // !DECK

