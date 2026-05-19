#include <unistd.h>

int main(int argc, char *argv[])
{
  unsigned int i = 0;
  unsigned int j = 0;

  if (argc == 3)
  {
    while (argv[1][i])
    {
      k = 0;
      while (k < i && argv[1][k] != argv[1][i])
        k++;
      if (k == i)
      {
        j = 0;
        while (argv [2][j])
        {
          if (argv[1][i] == argv[2][j])
           { 
            write (1, &argv[1][i]);
            break;
          }
          j++;
        }
      }
       i++;
    }
  }
  write (1, &"\n", 1);
  return (0);
}
