/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
//for(i=0;i<=n;i=i+2)// for even nos
for(i=1;i<=n;i=i+2)// for odd nos
printf("%d ",i);
return 0;
}