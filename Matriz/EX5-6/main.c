#include <stdio.h>
#include <stdlib.h>

int VerificaMatrizOposta(int M[3][3], int N[3][3])
{
  int i, j, cont=0;
  for ( i=0; i<3; i++ )
      for ( j=0; j<3; j++ ){
        if(M[i][j]==-N[i][j])
            cont++;
      }
  for ( i=0; i<3; i++ )
      for ( j=0; j<3; j++ ){
        if(i==1)

      }
  if(cont==9)
    printf("\nA matriz N eh oposta da matriz M\n");
  else
    printf("\nAs matrizes nao sao opostas\n");
  return 0;
}


int main()
{
    int i, j;
    int M[3][3], N[3][3];
    for ( i=0; i<3; i++ )
      for ( j=0; j<3; j++ ){
        if(j!=i)
            M[i][j]=25;
        if(j==i)
            M[i][j]=30;
      }
    for ( i=0; i<3; i++ )
      for ( j=0; j<3; j++ ){
        if(j!=i)
            N[i][j]=-21;
        if(j==i)
            N[i][j]=-30;
      }
    VerificaMatrizOposta(M, N);

    return 0;
}
