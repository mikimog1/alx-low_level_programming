#include<stdio.h>


int main(void)
{
  int afirst;
  int a;
  int bfirst;
  int b;

  for(afirst=48; afirst<58; afirst++)
    {
      for (a=48; a<58; a++)
        {
        b=a+1;
      bfirst=afirst;
      for (; bfirst<58; bfirst++)
        {
          for (; b<58; b++)
  {
              putchar(afirst);
              putchar(a);
              putchar(' ');
              putchar(bfirst);
              putchar(b);
              if (afirst != 57 || bfirst != 57 ||a != 56 || b != 57)
                {
                  putchar(',');
                  putchar(' ');
                }
            }
          b=48;
        }
      }
    }
  putchar('\n');
  return (0);
}
