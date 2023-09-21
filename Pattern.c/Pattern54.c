#include<stdio.h>
int main()
{

int i, j, k;
  for (i = 1; i <= 3; i++)
    {
      if (i == 1)
	{
	  printf ("*\n");
	}
      for (j = 1; j <= i * i; j++)
	{
	  printf ("*");
	  if(j%i==0){
	    printf("\n");  
	  }
	 
	}
      for (k = 1; k <= 3 * i; k++)
	{
	  printf ("*");
	   if (k % (i * 3) == 0)
	    {
	      printf ("\n");
	    }
    }
    }
    }
    