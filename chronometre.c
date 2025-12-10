#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main()
{
    int chronometre = 0;
    int sleeptime = 1000;
    printf("0");
    while(chronometre != 100000){
        sleep(1);
        chronometre = chronometre+1;
        printf("\n%d", chronometre);
    }
}