#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_print_comb2(void)
{
  char a = '0';
  while (a <= '9')
    {
      char b = '0';      
      while (b <= '9')
	{
	  char c = '0';
	  while (c <= '9')
	    {
	      char d = '0';
	      while (d <= '9')
		{
		  ft_putchar(a);
		  ft_putchar(b);
		  ft_putchar(' ');
		  ft_putchar(c);
		  ft_putchar(d);
		  if (a != '9' || b != '9' || c != '9' || d != '9')
		    {
		      ft_putchar(',');
		      ft_putchar(' ');
				  }
		  d = d + 1;
		}
	      c = c + 1;
	    }
	  b = b + 1;
	}
      a = a + 1;
    }   
}

int main ()
{
	ft_print_comb2();
	ft_putchar('\n');
	return(0);
}
