#include <stdio.h>
#include "main.h"

int main(void){
  int i;
  for (i = 0 ;i <1024; i++)
    {
      if(!(i%3) || !(i%5))
	{
	  printf("%d ,",i);
	    }
    }
  return (0);
}
