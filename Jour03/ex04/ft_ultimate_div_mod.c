void ft_ultimate_div_mod(int *a, int *b)
{
  int acopie;
  int bcopie;
  acopie = *a;
  bcopie = *b;
  *a = acopie / bcopie;
  *b = acopie % bcopie;
}
