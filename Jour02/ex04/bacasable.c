#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_print_comb(void)
{
  char x = '0';
  while (x <= '9')
    {
      char y = '0';      
      while (y <= '9')
	{
	  char z = '0';	
	  while (z <= '9')
	    {
	      if(x < y && y < z)
		{
		  ft_putchar(x);
		  ft_putchar(y);
		  ft_putchar(z);
		  if (x != '7' || y != '8' || z != '9')
		    {
		      ft_putchar(',');
		      ft_putchar(' ');
		    }
		}
	      z = z + 1;
	    }
	  y = y + 1;
	}
      x = x + 1;
    }
}

int main()
{
  ft_print_comb();
  ft_putchar('\n');
  return (0);
}
