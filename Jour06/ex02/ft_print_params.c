#include <unistd.h>

void ft_putchar (char c)
{
  write(1, &c, 1);
}
 
void ft_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
  int i;

  i = 1;
  while (i < argc)
    {
      ft_putstr(argv[i]);
      ft_putchar('\n');
      i++;
    }
  return(0);
}
