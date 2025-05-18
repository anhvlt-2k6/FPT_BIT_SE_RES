//THAYCACAC
//Vi du ve su dung bien extern
#include <stdio.h>
int main(void)
  { extern int first, last; /* use global vars */
    printf("%d %d\n", first, last);
    return 0;
  }
/* global definition of first and last */
int first = 10, last = 20;


