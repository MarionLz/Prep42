#include <unistd.h>

int main()
{
  char a = 'a';
  char b = 66;
  write(1, &a, 1);
  write(1, &b, 1);
  return (0);
}
