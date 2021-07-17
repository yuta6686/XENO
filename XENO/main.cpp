//-----------------------------------------------------------------------
//	[main.cpp]
//										Author	:	Yanagisawa Yuta	
//										Data	:	2021/07/12
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
#include <time.h>
#include <stdlib.h>
#include<iostream>

#include"Card.h"
#include"CreateDeck.h"
#include"Deck.h"
#include"main.h"
#include"Player.h"
#include"prepare.h"
#include"Trash.h"
#include "Field.h"

using namespace std;



int main() {
	srand((unsigned int)time(NULL));

	Field fMain;
	fMain.GameMainField();
	
}