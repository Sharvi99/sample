#include<stdio.h>
void main()
{
 int i,l,p=0;
 printf("Enter the limit:");
 scanf("%d",&l);
 for(i=0;i<l;i++)
 {
  if(l%i==0)
  {
   p++;
  }
 if(p==2)
 {
  printf("%d\n",p);
 }
}
}

