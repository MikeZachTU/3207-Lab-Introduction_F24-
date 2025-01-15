#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Establish the inclusive minimum and maximum variables within the ASCII range for A-Z
#define MINIMUM 65
#define MAXIMUM 90

int randchar();

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}

int randchar(){

    // Establish a value variable
    int value;

    // Randomly choose a value between the ranges of 65-90 as these correspond to A-Z ASCII
    value = (rand() % (MAXIMUM - MINIMUM + 1)) + MINIMUM;

    // printf("The value randomly chosen was: %d\n", value);
    return value;

}