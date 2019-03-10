//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

void run_local_array() {
    printf("Running local array\n");

    struct Test{
	char data;
};
static struct Test arrayOfTests[20];

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
