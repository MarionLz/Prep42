#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return(0);
}

void ft_print_combn(int n)
{
   char a = '0';
   while (a <= '9' && n <= 3)
    {
      char b = '0';
      while (b <= '9'&& n <=2 )
	{
	  char c = '0';
	  while ( c <= '9'&& n <=1 )
	    {
	      if (a < b && b < c)
		{		  			  
		  if (a != '7' || b != '8' || c != '9')
		    {
		      ft_putchar(',');
		      ft_putchar(' ');
		    }
		}
	      ft_putchar(c);
	      c = c + 1;
	    }
	  ft_putchar(b);
	  b = b + 1;
	}
      ft_putchar(a);
      a = a + 1;
    }
}

int main()
{
  int n;
  n = 2;
  ft_print_combn(2);
  ft_putchar('\n');
  return(0);
}
