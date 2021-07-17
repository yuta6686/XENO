#include "Player.h"
#include "Deck.h"
#include "Card.h"
#include "bits/stdc++.h"
using namespace std;
int Player::SelectCard(int _first, int _second)
{
    while (true){
        string s;
        cout << "どちらを選択しますか" << endl << "first:[" << _first <<"]"
            << endl << "second:[" << _second << "]"<<endl;

        cin >> s;

        int num = atoi(s.c_str());

        cout << num << endl;

        if (num != _first && num != _second) {
            cout << "ちゃんと選んでください\n" << endl;
        }
        else return num;
    }
    return 0;
}

bool Player::AddHandCard(Card* pCard)
{
    if (_hCard >= _card_max) {
        return false;
    }

    _pCard[_hCard++] = pCard;
    return true;
}

Card* Player::PutOutCard(int index)
{
    if (index<0 || index > _card_max)return nullptr;

    //indexのカードにnullptrを入れる
    _pCard[index] = nullptr;    

    //_Hcard番目のカードをindex番目のカードに代入
    _pCard[index] = _pCard[GetHaveCard()];

    //_hCardを減らして登録
    _hCard--;

    return _pCard[index];
}

Card* Player::DrawCard(Deck* deck)
{
    if (deck->deck_card_num <= 0 || deck->deck_card_num > deck->Get_card_num_max())
        return nullptr;

    Card* card = deck->GetCard(deck->deck_card_num);

    deck->DeleteCard(deck->deck_card_num);

    deck->deck_card_num--;

    return card;
}

void Player::ShowHand()
{
    cout << _player_num << "番目の手札" << endl;
    for (int i = 0; i < _hCard; i++) {
        cout << _pCard[i]->GetNum() << ":【";
        cout << _pCard[i]->GetName() << "】" << endl;
    }
}
