#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (str[i] != to_find[0])
    {
      if (str[i] == '\0')
	{
	  return(0);
	}
      i++;
    }
  while (str[i] == to_find[j])
    {
      i++;
      j++;
    }
  return(to_find);
}

int main()
{
  char str[] = "Le coucou vole dans le ciel qui est bleu aujourd'hui.";
  char to_find[] = "ciel";
  char *position;

  position = ft_strstr(str, to_find);
  printf("La chaine recherchee est : %s", position);
  return(0);
}
