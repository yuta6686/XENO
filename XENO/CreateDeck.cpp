#include "CreateDeck.h"
#include "Card.h"
#include"Deck.h"

#include<iostream>

using namespace std;

bool CreateDeck::Shuffle(Deck* deck,int cn,int* noko)
{
    int cardNum = cn;
    
    while (true) {
        //1～10までの数値でランダム
        int randum = (rand() % 10) + 1;

        //終了判定
        bool flag = false;

        //カードの枚数が18枚になったら強制終了
        if (cardNum <= 0)return true;

        //nokoriの配列分のカードを選別
        for (int i = 1; i <= 10; i++) {
            if (noko[i] == 0 )continue;
            if (noko[i] > 0)break;
            flag = true;
        }

        //カードの枚数整理
        if (noko[randum] == 0)continue;

        //ランダムをCrateDeckの_numに代入
        _num = randum;

        //_numに応じて_nameを変更
        switch (_num)
        {
        case 1:
            _name = "少年";
            break;
        case 2:
            _name = "兵士";
            break;
        case 3:
            _name = "占師";
            break;
        case 4:
            _name = "乙女";
            break;
        case 5:
            _name = "死神";
            break;
        case 6:
            _name = "貴族";
            break;
        case 7:
            _name = "賢者";
            break;
        case 8:
            _name = "精霊";
            break;
        case 9:
            _name = "皇帝";
            break;
        case 10:
            _name = "英雄";
            break;
        default:
            _name = "ななし";
            break;
        }

        //カード追加
        deck->Add_Card(Create());

        //nokoのカードをへらす
        *(noko + randum) = *(noko + randum) - 1;
        

        //残りのカード枚数をへらす
        cardNum--;

        
        
        //cout <<randum<< nokori[randum] << endl;
        if (flag == true)return true;
    }
    return false;
}



Card* CreateDeck::Create()
{
    return new Card(_name, _num);
}
