/*#include <unistd.h>

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
    }*/

#include <ft.a>

int main(int argc, char **argv)
{
  while(argc > 1)
    {
      ft_putstr(argv[argc - 1]);
      ft_putchar('\n');
      argc--;
    }
  return(0);
}
