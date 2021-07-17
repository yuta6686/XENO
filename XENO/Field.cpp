#include "Field.h"
#include "Player.h"
#include "Deck.h"
#include "CreateDeck.h"
#include "Card.h"
#include "bits/stdc++.h"
#include "main.h"
#include "prepare.h"
using namespace std;



int Field::InputPlayerMax()
{
	while (true) {
		cout << "プレイヤーの最大人数を入力してね" << endl;
		string s;
		
		cin >> s;

		int num = atoi(s.c_str());

		cout << num << endl;
	
		if (num <= 4 && num >= 1)return num;
		cout << "ちゃんと記入してください" << endl;
	}
	return 0;
}

void Field::GameMainField()
{
	//プレイヤーの最大人数設定
	_player_max = InputPlayerMax();

	//人数分のプレイヤーのメモリ確保
	vector<Player> p(_player_max);

	//それぞれのプレイヤーに１～４の番号を割り当てる
	rep(i, 0, _player_max) {
		p[i].SetPlayerNum(i + 1);
	}

	//プレイヤーの名前をいれるとかもいい

	
	Deck deck;
	CreateDeck cDeck;

	//Prepareがはいる
	Prepare pre(_player_max);

	//pre.MainPrepare(p, &deck, &cDeck);
		//山札シャッフル

	cDeck.Shuffle(&deck, deck.deck_card_num, deck.GetNokori());
	deck.ShowDeck();


	//人数分カードを手札に加える
	for (int i = 0; i < GetPlayerMax(); i++) {
		if (!p.at(i).AddHandCard(p.at(i).DrawCard(&deck)))
		{
			cout << "だめでした" << endl;
			return;
		}
	}


	//人数分のカードを表示
	for (int i = 0; i < GetPlayerMax(); i++) {
		p.at(i).ShowHand();
	}

#ifdef TURN
	while (true) {

		//例）最大プレイヤー人数が４人ー＞p[3].playernum->4
		switch ((_turn % p[_player_max-1].GetPlayerNum())+1) {
		case 1:
			Card * pCard;
			//カードを引く
			pCard=p[1].DrawCard(&deck);

			//残りカードの調整

			deck.GetNokori()[pCard->GetNum()]--;

			//出すカードを選ぶ
	

			//選んだカードをトラッシュに捨てる

			//効果を発動する
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		}
		
		_turn++;
	}
#endif //TURN
}
