#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10];
int i=0,j=0;
clrscr();
printf("enter the array of integers");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("enter the second array of integer");
for(i=0;i<10;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
if(a[i]==a[j] && a[i+1]==b[j+1])
{
printf("array a is a substring of b")
}
}
}
getch();
}
