#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
  int len;
  int i;
  len = 0;
  while (dest[len]!='\0')
      len++;
  i=0;
  while (i < n && src[i]!= '\0')
    {
      dest[len] = src[i];
      len++;
      i++;
    }
  dest[len] ='\0';
  return (dest);
}
      
