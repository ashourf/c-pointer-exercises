//
// Created by Ivo Georgiev on 2019-03-07.
//
struct Test{
	char data;
};
static struct Test arrayOfTests[20];
#include <stdio.h>
#include <stdlib.h>
void run_global_array() {
    printf("Running global array\n");
	char newData = 'a';
    for(int x = 0; x < 20; x++)
	   {
		   arrayOfTests[x].data= newData;
		   newData++;
	   }
    for (int x = 0; x < 20; x++)
	  {
		  printf("data: %c \n", arrayOfTests[x].data);
	  }

}
