# include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int i;
  i = 0;
  while (str[i] != '\0')
    {
      ft_putchar(str[i]);
      i = i + 1;
    }
}

int main()
{
  char str[] = "Hello World";
  ft_putstr(str);
  ft_putchar('\n');
  return (0);
}
