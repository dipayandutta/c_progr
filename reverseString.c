#include <stdio.h>
#include <string.h>

/*function declearation*/

void printReverse(char str[],int length);
int stringLength(char *pointer);

/*The main function*/
int main(void)
{
  char str[] = "Hello World!";
  /*function calling*/
  int length = stringLength(str);

  printReverse(str,length);
  return 0;
}
int stringLength(char *pointer)
{
int count =0;
  while(*(pointer+count) != '\0')
    count++;

  return count;
}
/*function defination*/
void printReverse(char s[],int len)
{
  int i;
  for(i = len-1;i>=0;i--)
  {
    if(s[i] == ' ')
    {
      s[i] = '\0';
      printf("%s",&(s[i])+1);
    }
  }
  printf("%s",s);
}

