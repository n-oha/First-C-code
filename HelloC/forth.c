#include <stdio.h>

int main()
{
	char suit = 'H';
	switch (suit)
	{
	case 'K':
	puts("King");
	break;
	
	case 'Q':
	puts("Queen");
	break;

	case 'J':
	puts("Jack");
	break;

	default:
	puts("Ace");
	}

	return 0;
}