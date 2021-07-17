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

	Player* p[4];
	for (int i = 0; i < 4; i++) {
		p[i] = nullptr;
	}
	//�l�����̃v���C���[�̃������m��
	for (int i = 0; i < _player_max; i++) {
		p[i] = CreatePlayer(i);
	}

	//�v���C���[�̖��O�������Ƃ�������

	
	Deck deck;
	CreateDeck cDeck;

	//Prepare���͂���
	Prepare pre(_player_max);

	//pre.MainPrepare(p, &deck, &cDeck);
		//�R�D�V���b�t��

	cDeck.Shuffle(&deck, deck.deck_card_num, deck.GetNokori());
	deck.ShowDeck();


	//�l�����J�[�h����D�ɉ�����
	for (int i = 0; i < GetPlayerMax(); i++) {
		if (!p[i]->AddHandCard(p[i]->DrawCard(&deck)))
		{
			cout << "���߂ł���" << endl;
			return;
		}
	}


	//�l�����̃J�[�h��\��
	for (int i = 0; i < GetPlayerMax(); i++) {
		p[i]->ShowHand();
	}

#ifdef TURN
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
#endif //TURN
}

Player* Field::CreatePlayer(int index)
{
	return new Player(index);
}
