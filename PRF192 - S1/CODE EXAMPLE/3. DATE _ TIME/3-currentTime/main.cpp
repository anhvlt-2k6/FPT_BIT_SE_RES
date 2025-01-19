//This program displays the local time defined by the system:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
  { system("cls");
    tm *loc;
    long t; 
     // calculate number of seconds from 1970 until current time, 
    t = time(NULL); 
    loc = localtime(&t); // convert to tm format using local time
    printf("\n");
    printf("Year: %d\n", loc->tm_year+1900);
    printf("Month: %d\n", loc->tm_mon+1);
    printf("Day: %d\n", loc->tm_mday);
    printf("Week Day: %d\n", loc->tm_wday);
    printf("Hour: %d\n", loc->tm_hour);
    printf("Minute: %d\n", loc->tm_min);
    printf("Second: %d\n", loc->tm_sec);
    printf("\n");
    return 0;
  }

