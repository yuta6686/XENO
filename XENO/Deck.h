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
  //�R�D�J�[�h�̍ő�l
	static const int Card_Max = 18;		

  //�J�[�h���i�[����ꏊ
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

  //�J�[�h��o�^����i�V���b�t�����āj
	bool Add_Card(Card* pCard);	

	bool DeleteCard(int index);

	Card* GetCard(int index) { return mp_cards[index]; }

  //�]���D�̐ݒ�
	//void ReinCard();	

/*  �Q�b�^�[  */

  //�f�b�L�ɂ���J�[�h�̖����̎擾
	//int Get_deck_card_num(){ return deck_card_num; }

	//���݂̎R�D�̃J�[�h����
	int deck_card_num = Card_Max;

  //Card_Max(=18)���擾
	int Get_card_num_max() { return Card_Max; }

	void ShowDeck();
};
#endif // !DECK

