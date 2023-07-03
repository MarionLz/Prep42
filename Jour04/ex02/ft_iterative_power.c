#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
  if (power < 0)
    {
      return(0);
    }
  else if (power == 0)
    {
      return(1);
    }
  else if (power == 1)
    {
      return(nb);
    }
  else
    {
      int i;
      int resultat;

      i = 1;
      resultat = nb;
      while (i < power)
	{
	  resultat = resultat * nb;
	  i++;
	}
      return(resultat);
    }
}

int main(void)
{
  int nb;
  int power;
  int resultat;

  nb = 2;
  power = 4;
  resultat = ft_iterative_power(nb, power);
  printf("Le résultat est: %d", resultat);
}
