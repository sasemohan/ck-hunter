#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],max[20],current,i[20],j,k,sum[20],pre[20],l,maxi;
printf("enter the numbers in an array");
for(i=o;i<20;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<20;i++)
{
  for(j=0;j<20;j++)
  {
    for(k=0;k<20;k++)
    {
      pre[i]=sum[i];
      sum[i]=a[i]+a[j]+a[k];
      if(sum[i]>pre[i])
      {
        max[i]=sum[i];
      }
    }
  }
  for(l=1;l<20;l++)
{
  maxi=max[0]
  if(maxi<max[l])
  {
    maxi=max[l]
  }
  if(l==19)
  {
    printf(%d%d%d,a[i],a[j],a[k])
  }
}
}
getch();
}

