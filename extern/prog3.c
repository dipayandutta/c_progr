#include <stdio.h>
#include "file3a.h"
#include "prog3.h"

int main(void)
{
  use_it();
  global_variable += 19;
  use_it();
  printf("Increment %d \n",increment());

  return 0;
}
