
/* Programme de test de la librairie */
#ifndef QUICKSORT_UTIL
#include "../quickSort_util.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define T_MAX (int)100000
#define DEFAULT_V (int)100


//return -1 if success, index of first error else
int test_and_check(int tab[], int size){
  quickSort_int(tab, size);
  for (int i = 0; i < size-1; i++) {
		printf("%d ,",tab[i] );
    if( tab[i] > tab[i+1] )
      return i;
  }
  return -1;
}


int main(int argc, char const *argv[])
{

    int tab[T_MAX];
    int size = DEFAULT_V;
		time_t t;

    if (argc > 1){
      int param = atoi(argv[1]);
      size = (param > 2 && param <= T_MAX) ? param : DEFAULT_V;
      printf("Using %s value %d\n",(size == DEFAULT_V)?"default":"specified",size);
    }else{

		}
		srand((int) time(&t));

		for (int i = 0; i < size; i++) {
			tab[i] = rand() % size;
			printf("%d : ",tab[i] );
		}
		printf("\n");

		int res = test_and_check(tab, size);

    printf("\n%s\n",(res == -1)?"OK":"Error");
    return 0;
}
