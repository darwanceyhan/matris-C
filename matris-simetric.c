#include <stdio.h>
#define column 3
#define row 3

// a[column][row] ==  a[column][row]^T
int main()
{
  int matris[column][row], control = 1, i, j;

  for (i = 0; i < column; i++)
  {
    for (j = 0; j < row; j++)
    {
      printf("Enter value");
      scanf("%d", &matris[i][j]);
    }
  }

  for (i = 0; i < column; i++)
  {
    for (j = 0; j < row; j++)
    {
      if (matris[i][j] != matris[j][i])
        control = 0;
    }
  }

  if (control == 0)
    return printf("It is not simetric");

  return printf("It is simetric");
}
