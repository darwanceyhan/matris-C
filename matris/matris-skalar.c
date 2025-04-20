#include <stdio.h>
#define column 3
#define row 3

int main()
{
  int matris[row][column], diagonal[row], isScalar = 1, isDiagonal = 1, i, j, k;

  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      printf("Enter value for matris[%d][%d]: ", i, j);
      scanf("%d", &matris[i][j]);
    }
  }

  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      if (i == j)
        diagonal[i] = matris[i][j];

      if (i != j && matris[i][j] != 0)
        isDiagonal = 0;
    }
  }

  for (k = 1; k < row; k++)
  {
    if (diagonal[k] != diagonal[k - 1])
    {
      isScalar = 0;
      break;
    }
  }

  if (isDiagonal && isScalar)
    printf("It is a scalar matrix\n");
  else if (isDiagonal && !isScalar)
    printf("It is a diagonal matrix but not a scalar matrix\n");
  else
    printf("It is not a diagonal matrix\n");

  return 0;
}
