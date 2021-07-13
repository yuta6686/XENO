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
	//�R���X�g���N�^
	Player(int player_num):
		_player_num(player_num),_hCard(0){
		for (int i = 0; i < _card_max; i++)
			_pCard[i] = nullptr;
	}

	Player():_hCard(0) { 
		for (int i = 0; i < _card_max; i++)
			_pCard[i] = nullptr;
	}

	//�f�X�g���N�^
	~Player(){}

	// SelectCard
	//2���̃J�[�h����1���̃J�[�h�C���f�b�N�X��I������
	//����		�i1���ڂ̃J�[�h�C���f�b�N�X�A2���ڂ̃J�[�h�C���f�b�N�X�j
	//�߂�l	�I�����ꂽ�J�[�h�C���f�b�N�X
	int SelectCard(int _first, int _second);

	//����		�J�[�h�̃|�C���^
	//�߂�l�@	�ǉ��ł�����true
	//�@�\		��D�ɃJ�[�h��������
	bool AddHandCard(Card* pCard);

//	GetCard(int index)-----------------------
//	����	�J�[�h�̃C���f�b�N�X
//	�߂�l	���o�����J�[�h�̃|�C���^
//	�@�\	�J�[�h���\���ȂǂɎg��
	Card* GetCard(int index) { return _pCard[index]; }

//	PutOutCard(int index)-------------------
//	����	�J�[�h�̃C���f�b�N�X
//	�߂�l	���o�����J�[�h�̎c��̃|�C���^
//	�@�\	��D����J�[�h�����o��
	Card* PutOutCard(int index);

//	DrawCard()------------------------------
//	����	Deck�̃|�C���^
//	�ߒl	�������J�[�h�̃|�C���^
//	�@�\	��ԏ�̃J�[�h�̔ԍ������o����
//			�R�D�̃J�[�h���ꖇ���炷
	Card* DrawCard(Deck* deck);

	int GetPlayerNum() { return _player_num; }
	int GetHaveCard() { return _hCard; }
	int GetCardMax() { return _card_max; }

	void SetPlayerNum(int num) { _player_num = num; }
	void SetHaveCard(int num) { _hCard = num; }
private:
	//�v���C���[�ԍ�(1�`�S)
	int _player_num;

	//�����Ă���J�[�h�̖����i1or2)
	int _hCard;

	//���Ă�J�[�h�̖���
	static const int _card_max = 2;

	//�v���C���[���J�[�h���i�[����ꏊ�i��D�j
	Card* _pCard[_card_max];
};
