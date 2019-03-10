//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <stdlib.h>
void run_monolithic_array() {
    printf("Running monolithic array\n");

    struct Test{
	char data;
};
 struct Test* testpointer = NULL;
 struct Test t1;
 testpointer = calloc(26,sizeof(t1));
char newData = 'a';
    for(int x = 0; x < 26; x++)
	   {
		   testpointer[x].data= newData;
		   newData++;
	   }
    for (int x = 0; x < 26; x++)
	  {
		  printf("data: %c \n", testpointer[x].data);
	  }
	  free(testpointer);
     testpointer = NULL;

}
