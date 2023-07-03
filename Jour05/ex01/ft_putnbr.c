void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  
  i = 0;
  while (str[i] != '\0')
    {
      ft_putchar(str[i]);
      i = i + 1;
    }
}

int main()
{
  int nb;
  nb =105;
  ft_putstr(nb);
  ft_putchar('\n');
  return (0);
}
