

#include <unistd.h>


int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_print_alphabet(void)
{
  int i;
  char c = 'a';
    
  i = 0;
  while (i < 26)
    {
      ft_putchar(c);
      i = i +1;
      c = c +1;
    }
}

int main()
{
  ft_print_alphabet();
  ft_putchar('\n');
  return (0);
}
