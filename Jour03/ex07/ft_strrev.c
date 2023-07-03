#include <stdio.h>

char *ft_strrev(char *str)
{
  int strlen;
  int i;
  char temp;
  
  strlen = 0;
  i = 0;
  while (str[strlen] != '\0')
    {
      strlen++;
    }
  strlen--;
  while (i < strlen)
    {
     temp = str[i];
     str[i] = str[strlen];
     str[strlen] = temp;
     i++;
     strlen--;
    }
  return(str);
  
}

int main(void)
{
  char str[] = "toto";
  char *strinversee = ft_strrev(str);
  printf("Chaîne inversée : %s\n", strinversee);
  return(0);
}
