#include <stdio.h>
int main() 
{
    int a,b,cx,s=10;
    printf("Xonaning bo'yi va enini kiriting: ");
    scanf("%d%d",&a,&b);
    cx=a*b/s;
    if (a*b%10==0) printf("Xonani bo'yash uchun %d banka bo'yoq zarur/n",cx);
     else printf ("Xonani bo'yash uchun %d banka bo'yoq zarur/n", cx+1); 
     return 0;
}