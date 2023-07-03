int ft_strlen(char *str)
{
  int i;
  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return(i);
} 

int main(void)
{
  char *str;
  str = "toto";
  ft_strlen(str);
  return(0);
}
