#include <stdio.h>
int main() 
{
    int n,num1,num2,num3,natija;
    printf("Sonni kiriting (99<n<=999=");//345
    scanf("%d",&n);
    if (n>99 && n<1000);
    {
    num1=n/100;//3 
    num2=(n-(num1*100))/10;//4
    num3=n%10;//5
    natija=(num3*100)+(num2*10)+num1;
    printf("%d ni teskarisi %d ga teng",n,natija);
    }
    else printf("Noto'gri oralikdagi soni kiritdingiz");
    return 0;

}