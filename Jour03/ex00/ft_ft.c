#include <unistd.h>

void ft_putchar(char c) {
  write(1, &c, 1);
}

void ft_putnbr(int n) {
  if (n < 0) {
    ft_putchar('-');
    n = -n;
  }
  if (n >= 10) {
    ft_putnbr(n / 10);
  }
  ft_putchar(n % 10 + '0');
}

void ft_ft(int *nbr)
{
  *nbr = 42;
}

int main()
{
  int b;
  b = 0;
  ft_ft(&b);
  ft_putnbr(b);
  return (0);
}


