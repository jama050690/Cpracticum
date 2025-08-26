#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
 int main() 
{
    srand(time(0));
int n;
int number;
printf("Nechta raqam tanlansin? : ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
number=rand()%101+0;
if(number%2==0)
printf("%d =juft son\n",number);
else if (number%2>0)
printf("%d = toq son\n",number);

}


}