#include <stdio.h>
#include <stdlib.h> //random kutubxonasi
#include <time.h> //tasodiflarni tasodiflashtirish
 int main() 
{
    srand(time(0));
long int num;
// num=rand()%(b-a+1)+a
num=rand()%99+10;
printf("\nNatija: %li",num );
}