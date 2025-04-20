#include <stdio.h>
#define column 3
#define row 3

// diagonal matris
int main()
{
  int matris[row][column], control = 1, i, j;

  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      printf("Enter value");
      scanf("%d", &matris[i][j]);
    }
  }

  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      if (i != j && matris[i][j] != 0)
        control = 0;
    }
  }

  if (control == 0)
    return printf("It is not diagonal matrix");

  return printf("It is diagonal matrix");
}
