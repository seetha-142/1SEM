/*
  Write a program to generate all combinations of 1, 2 and 3 using for loop.
*/
#include<stdio.h>
void main()
{
  int i,k,j;
  for(i=1;i<=3;i++)
  {
    for(j=1;j<=3;j++)
    {
      for(k=1;k<=3;k++)
      {
        if(i!=j && j!=k && k!=i)
        {
          printf("%d%d%d\n",i,j,k);
        }
      }
    }
  }

}
