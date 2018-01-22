#include<iostream>
#include<stdlib.h>
using namespace std;

enum rank = {"two","three","four","five","six","seven","eight", "nine","ten","jack","queen","king","ace"};

enum suit = {"spade", "heart", "diamond", "club"};

class card
{
private: suit s;
	 rank r;

public: rank getRank()
	{
	return r;
	}
	suit getSuit()
	{
	return s;
	}
	void setSuit(suit st)
	{
	s=st;
	}
	void setRank(rank rk)
	{
	r=rk;
	}
}

class deckOfCards
{
private: card deck[52];
	 int n;
	 void shuffle()
	 {
	 card c;
	 int i=0, x, y;
	 int shuff = rand()%n + 1;
	 for (i=0; i<shuff; i++)
	 {
		x = rand() % 52;
		y = rand() % 52;
		if (x!=y)
		{
		c = deck[x];
		deck[x] = deck[y];
		deck[y] = c;
		}
		else
		i--;
	 }
public: void initialize()
	{
	 int i=0,j=0,k=0;
	 for (i=0;i<4;i++)
	 {
	 	for (j=0;j<13;j++)
		{
		deck.setSuit(i);
		deck.setRank(j);
		k++;
		}
	 }
	 shuffle();
	}
	
	card pickACard()
	{
	card a;
	int i=rand()%n;
	a = deck[i];
	for (;i<n;i++)
	deck[i] = deck[i+1];
	
	shuffle();
	return a;
	}
	
	card pickACard(suit st, rank rk)
	{
	for (int i=0;i<n;i++)
	{ 
		if (deck[i].getSuit()==st && deck[i].getRank()==rk)
		{
		 a = deck[i];
		 for (int j=0;j<n;j++)
		  deck[j]=deck[j+1];
		 break;
		}
	}
	return a;
	}
};

class Player
{

