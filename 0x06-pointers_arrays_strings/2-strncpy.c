#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
  int i;
  for (i = 0 ;i < n ;i++)
    {
      dest[i] = src[i];
    }
  return dest;
}   
