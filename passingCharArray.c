#include <stdio.h>

void dispchar( char ch )
{
  printf("%c",ch);
}
int main(void)
{
  char arr[] = {'a','b','c'};
  for(int x = 0 ; x <3;x++)
  {
    dispchar(arr[x]);
  }
  return 0;
}
