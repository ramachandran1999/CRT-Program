// Find the root digit of the given number
//1947
//1+9+4+7=21
//2+1=3
//3 root digit of 1947

#include<stdio.h>
int main()
{
int n,r,sum=0;
scanf("%d",&n);
a:
while(n!=0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
if(sum>9)
{
n=sum;
sum=0;
goto a;
}
printf("%d",sum);
return 0;
}
