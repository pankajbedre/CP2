
#include <stdio.h>
int a, b;
int
isPrime (int n)
{
  int i;
  for (i = 2; i <= n / 2; i++)
    {
      if (n % i != 0)
	continue;
      else
	return 1;
    }
  return 0;
}

void
Num (int x)
{
  for (int i = 2; i <= x / 2; i++)
    {


      if (isPrime (i) == 0 && isPrime (x - i) == 0)
	{

	  a = i;
	  b = x - i;

	  return;
	}
    }
}

void
generate (int n)
{

  if (n <= 7)
    printf ("Impossible to form");

  if (n % 2 != 0)
    {

      Num (n - 5);

     printf("2 3 %d %d" , a ,b);
    }

  else
    {

      Num (n - 4);

      printf("2 2 %d %d" , a , b);
    }
}

int
main ()
{

        int n = 8;
 
        generate(n);
}
