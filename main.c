#include <stdio.h>
#include "element.h"


int main(void) {
  // printf("Hello World\n");
  int A[5];
  A[0] = 23;
  int B[5] = {1,2,3,4,5};
  int i;

  // the amount of memory the array takes.
  printf("%lu\n", sizeof(B));
   printf("%u", element());

  for(i =0; i < 5; i++){
    // size of returns the amount of memory that is allocated.
    printf("%lu\n", sizeof(B[i]));
  }



  return 0;
}