#include "Field.h"
#include "Player.h"
#include "Deck.h"
#include "CreateDeck.h"
#include "Card.h"
#include "bits/stdc++.h"
#include "main.h"
using namespace std;



int Field::InputPlayerMax()
{
	while (true) {
		cout << "�v���C���[�̍ő�l������͂��Ă�" << endl;
		string s;
		
		cin >> s;

		int num = atoi(s.c_str());

		cout << num << endl;
	
		if (num <= 4 && num >= 1)return num;
		cout << "�����ƋL�����Ă�������" << endl;
	}
	return 0;
}

void Field::GameMainField()
{
	//�v���C���[�̍ő�l���ݒ�
	_player_max = InputPlayerMax();

	//�l�����̃v���C���[�̃������m��
	vector<Player> p(_player_max);

	//���ꂼ��̃v���C���[�ɂP�`�S�̔ԍ������蓖�Ă�
	rep(i, 0, _player_max) {
		p[i].SetPlayerNum(i + 1);
	}

	//Prepare���͂���
	Deck deck;
	CreateDeck cDeck;

	cDeck.Shuffle(&deck, deck.deck_card_num,deck.GetNokori());

	while (true) {

		//��j�ő�v���C���[�l�����S�l�[��p[3].playernum->4
		switch ((_turn % p[_player_max-1].GetPlayerNum())+1) {
		case 1:
			Card * pCard;
			//�J�[�h������
			pCard=p[1].DrawCard(&deck);

			//�c��J�[�h�̒���

			deck.GetNokori()[pCard->GetNum()]--;

			//�o���J�[�h��I��
	

			//�I�񂾃J�[�h���g���b�V���Ɏ̂Ă�

			//���ʂ𔭓�����
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
}
