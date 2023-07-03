#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
  int factorielle;
  if (nb > 1)
    {
      factorielle = nb * ft_recursive_factorial(nb - 1);
      return (factorielle);
    }
  else if (nb = 1)
    {
      return (1);
    }
  else 
    {
      return (0);
    }
}

int main()
{
  int nb;
  nb = 1;
  int resultat;
  resultat = ft_recursive_factorial(nb);
  printf("Le résultat de la factorielle est: %d", resultat);  
  return (0);
}
