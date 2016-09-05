#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],target,sum;
static int pre;
printf("enter the numbers in an array");
for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("enter the target number");
scanf("%d",&target);
i=0;
for(i=0;i<10;i++)
{
sum=sum+a[i];
if(sum==0)
{
if(sum==target)
{
printf("%d,%d",a[i],a[pre]);
}
}
pre=i;
}
