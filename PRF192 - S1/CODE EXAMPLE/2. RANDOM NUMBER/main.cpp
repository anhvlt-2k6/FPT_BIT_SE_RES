//THAYCACAC
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

// HAM RANDOM SO TU A DEN B
void randNumbers(int a, int b, int n)
   { printf("\n%d  random numbers between  %d   and   %d:\n\n",n,a, b );
     int k;
     for (int i = 0; i < n ; i++)
        { k = a + rand() % (b + 1 - a);
          printf("%d  ",  k); 
        }
     printf("\n\n");
   }
// HAM RANDOM SO THUC TU A DEN B
void randNumbers(float a, float b, int n)
   { printf("\n%d  random numbers between  %5.0f   and   %5.0f:\n\n",n,a, b );
     float x;
     for (int i = 0; i < n ; i++)
        { x = a + ((float) rand()) / RAND_MAX*(b - a);
          printf("%5.2f  ",  x); 
        }
     printf("\n\n");
   }
int main ( )
  {
     int  n =10, a = 6, b = 100;

     printf("RAND_MAX = %d\n", RAND_MAX);
     srand(time(NULL));
     printf("This is a pseudo random number between 0 and RAND_MAX: %d\n", rand());
     randNumbers(a,b,n);     
     getch();
     randNumbers(a,b,n);     
     randNumbers((float) a,(float) b,n);     
     return(0);
  }
  
