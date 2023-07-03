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

void ft_ultimate_ft(int ***nbr)
{
  ***nbr=42;
  /* int a;
  int *nbr1;
  int **nbr2;
  int ***nbr;
  int ****nbr4;
  int *****nbr5;
  int ******nbr6;
  int *******nbr7;
  int ********nbr8;
  
  a = 42;
  nbr1 = &a;
  nbr2 = &nbr1;
  nbr = &nbr2;
  nbr4 = &nbr3;
  nbr5 = &nbr4;
  nbr6 = &nbr5;
  nbr7 = &nbr6;
  nbr8 = &nbr7;
  nbr = &nbr8;*/
}

int main()
{
  int b;
  b = 0;
  int *nbr1;
  int **nbr2;
  int ***nbr3;
  nbr1 = &b;
  nbr2 = &nbr1;
  nbr3 = &nbr2;
  ft_ultimate_ft(nbr3);
  ft_putnbr(b);
  return (0);
}


