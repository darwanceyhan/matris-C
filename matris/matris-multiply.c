#include <stdio.h>
#define row 2
#define m 3
#define column 2

int main()
{
  int A[row][m], B[m][column], C[row][column], i, j, k;
  for (i = 0; i < row; i++)
    for (j = 0; j < m; j++)
    {
      printf("A[%d][%d]:", i + 1, j + 1);
      scanf("%d", &A[i][j]);
    }
  for (i = 0; i < m; i++)
    for (j = 0; j < column; j++)
    {
      printf("B[%d][%d]:", i + 1, j + 1);
      scanf("%d", &B[i][j]);
    }

  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      C[i][j] = 0;
      for (k = 0; k < m; k++)
      {
        C[i][j] += A[i][k] * B[j][k];
      }
    }
  }

  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
      printf("%3d", C[i][j]);
    printf("\n");
  }
}