//
// Created by Ivo Georgiev on 2019-03-07.
//
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char data;
}Test;
 Test **arrayOfTests;

void run_array_of_pointers() {
    printf("Running array of pointers\n");
		//allocate space for array
arrayOfTests = malloc(sizeof(Test) *26);
//allocate space for each struct
for ( int x = 0; x < 26; x++)
{
	arrayOfTests[x] = malloc(sizeof(Test));
}
char newData = 'a';
for (int i = 0; i < 26; i++) { // add the random values to the grid
	//	for (int j = 0; j < x; j++)
				arrayOfTests[i]->data = newData;
				newData++;
}
    for (int x = 0; x < 26; x++)
	  {
		  printf("data: %c \n", arrayOfTests[x]->data);
	  }
	//  free(testpointer);

}
