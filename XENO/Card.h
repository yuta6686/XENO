#pragma once
//-----------------------------------------------------------------------
//	[Card.h]
//										Author	:	Yanagisawa Yuta	
//										Data	:	2021/07/12
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
#include<string>

class Card {

private:
  //�J�[�h���@(num�ɉ����Č��܂�)
	std::string _name;	

  //�J�[�h�̔ԍ�
	int _num;			

public:

  //���������R���X�g���N�^
	Card() :_name("noname"),_num(0) {}

  //�����L��R���X�g���N�^
  //name��num
	Card(std::string _name, int _num) :_name(_name), _num(_num){}

  //�Q�b�^�[
	std::string GetName(){ return _name; }
	int GetNum(){ return _num; }

  //�����o�֐�
	virtual void effect(int _num){}
};
