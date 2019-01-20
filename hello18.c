#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,fact=1;
scanf("%d",&n);
while(n>0)
{
scanf("%d",&num);
for(i=num;i>0;i--)
{
fact=fact*i;
}
printf("%d",fact);
n--;
}
getch();
}
