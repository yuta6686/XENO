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

static int* nokorin;

int main() {
	srand((unsigned int)time(NULL));

	

	//Prepare‚É“ü‚ê‚é
	Deck deck;
	CreateDeck cd;

	nokorin = deck.GetNokori();
	int n = 3;
	nokorin[2]--;
	nokorin[5]--;
	nokorin[3]--;
	for (int i = 0; i < n; i++) {
		deck.deck_card_num--;
	}
	
	
	cd.Shuffle(&deck,deck.deck_card_num,nokorin);
	deck.ShowDeck();
	
	
}