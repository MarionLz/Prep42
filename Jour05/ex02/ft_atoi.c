int ft_atoi(char *str)
{
  int i;

  i = 0;
  if (str[0] == '+' || str[0] == '-')
    {
      i++;
    }
  while (str[i])
}

int main()
{
  int integer;
  
  char str[] = "12345ab";
  integer = ft_atoi(str);
  return(0);
}
