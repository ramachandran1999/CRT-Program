/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//given no is prime or not
#include <stdio.h>
int main()
{
int n,i,count=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
count++;
}
if(count==2)
printf("prime");
else
printf("not prime");
return 0;
}


