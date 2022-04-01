/*
 * 666.c
 *
 *  Created on: 1 апр. 2022 г.
 *      Author: aptem
 */
#include <stdio.h>
int main (){
	printf ("Helllllo World\n");
	int input;
	scanf("%d", &input);
	printf ("%09d\n", input*2);
if (input == 60){
	printf ("Chislo = 60\n");}
	else if (input >= 70){
		printf ("Chislo > 70\n");
	}
	else if (input == 70){
			printf ("Chislo == 70\n");
		}
	else {
		printf ("Chislo < 70 i != 60 \n");
	}

	return 0;
}

