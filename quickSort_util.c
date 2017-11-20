#ifndef QUICKSORT_UTIL
#include "quickSort_util.h"
#endif

#include <stdio.h>
#include <stdlib.h>

void swap(int array[], int a, int b){
  int temp = array[a];
  array[a] = array[b];
  array[b] = temp;
}

void initPivot(int array[], int first, int last){
  int max = last;
  if(array[max] < array[first]){
    max = first;
  }
  if(array[max] < array[last/2]){
    max = last/2;
  }
  swap(array, max, last);
}


void quickSort_int_wrk(int array[], int first, int last) {
  int head = first;
  int pivot = last;

  if(first>=last){
    return;
  }else{
    //tri
    while (pivot != head){
      //si la vlauer pivot est plus petite ou égale a
      //la valeur de pointeur, echanger les valeurs
      if (array[pivot] <= array[head]){
        swap(array, pivot, head);
      }
      // si le pivot est plus grand que le pointeur
      //incrémenter le pointeur
      if (pivot > head) {
        head++;
      }else{
        //sinon decrémenter le pointeur
        head--;
      }
    }
    //appel recursif
    quickSort_int_wrk(array, first, pivot-1);
    quickSort_int_wrk(array, pivot, last);
  }

  return;
}

void quickSort_int(int array[], int size){
  if(size < 2){
    return;
  }else{
    initPivot(array,0,size-1);
    quickSort_int_wrk(array,0,size-1);
    return;
  }
}
