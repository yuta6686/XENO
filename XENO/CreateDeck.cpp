#include "CreateDeck.h"
#include "Card.h"
#include"Deck.h"

#include<iostream>

using namespace std;

bool CreateDeck::Shuffle(Deck* deck,int cn)
{
    int cardNum = cn;
    
    while (true) {
        //1�`10�܂ł̐��l�Ń����_��
        int randum = (rand() % 10) + 1;

        //�I������
        bool flag = false;

        //�J�[�h�̖�����18���ɂȂ����狭���I��
        if (cardNum <= 0)return true;

        //nokori�̔z�񕪂̃J�[�h��I��
        for (int i = 1; i <= 10; i++) {
            if (nokori[i] == 0 )continue;
            if (nokori[i] > 0)break;
            flag = true;
        }

        //�J�[�h�̖�������
        if (nokori[randum] == 0)continue;

        //�����_����CrateDeck��_num�ɑ��
        _num = randum;

        //_num�ɉ�����_name��ύX
        switch (_num)
        {
        case 1:
            _name = "���N";
            break;
        case 2:
            _name = "���m";
            break;
        case 3:
            _name = "��t";
            break;
        case 4:
            _name = "����";
            break;
        case 5:
            _name = "���_";
            break;
        case 6:
            _name = "�M��";
            break;
        case 7:
            _name = "����";
            break;
        case 8:
            _name = "����";
            break;
        case 9:
            _name = "�c��";
            break;
        case 10:
            _name = "�p�Y";
            break;
        default:
            _name = "�ȂȂ�";
            break;
        }

        //�J�[�h�ǉ�
        deck->Add_Card(Create());

        //nokori�̃J�[�h���ւ炷
        nokori[randum]--;

        //�c��̃J�[�h�������ւ炷
        cardNum--;
        
       // cout <<randamu<< nokori[randamu] << endl;
        if (flag == true)return true;
    }
    return false;
}



Card* CreateDeck::Create()
{
    return new Card(_name, _num);
}
