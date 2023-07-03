#include <stdio.h>
  
int ft_sqrt(int nb)
{
  int sqrt;
    
  if (nb <= 0)
    {
      return(0);
    }
  else
    {
      sqrt = 1;
      while ((sqrt * sqrt) <= nb)
	{
	  if ((sqrt * sqrt) == nb)
	    {
	      return(sqrt);
	    }
	  sqrt++;
	}
      return(0);
    }
}

int main()
{
  int nb;
  int resultat;

  nb = 64;
  resultat = ft_sqrt(nb);
  printf("La racine carree de %d est : %d", nb, resultat);
  return(0);
}
