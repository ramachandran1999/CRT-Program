/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//print  1 to n numbers using while
#include <stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
i=1;
while(i<=n)
{
printf("%d ",i);
i++;
}
return 0;
}