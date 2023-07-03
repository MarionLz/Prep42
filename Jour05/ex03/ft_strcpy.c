#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src [i];
      i++;
    }
  dest[i] = '\0';
  return(dest);
}

int main()
{
  char str[] = "calin";
  char dest[20];
  char *copy;

  copy = ft_strcpy(dest, str);
  printf("La chaine copiee est : %s", copy);
  return(0);
}
