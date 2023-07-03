#include <stdio.h>

int ft_fibonacci(int index)
{
  if (index < 0)
    {
      return(-1);
    }
  else if (index == 0)
    {
      return(0);
    }
  else if (index == 1)
    {
      return(1);
    }
  else
    {
      return(ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
    }
}

int main(void)
{
  int index;
  int resultat;

  index = 7;
  resultat = ft_fibonacci(index);
  printf("L'element est: %d", resultat);
  return(0);
}
