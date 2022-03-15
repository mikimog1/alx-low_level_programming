#include <stdio.h>
/*
 *this code prints _putchar
 *
 */
int main()
{
  char *write = "_putchar";

  while(*write)
{
  putchar(*write);
  write++;
}
  putchar('\n');
  return 0;
}
	
