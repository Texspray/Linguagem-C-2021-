#include <stdio.h>
#include <stdlib.h>

int identificaMatriz(int M[3][3])
{
    int i, j;
    for ( i=0; i<3; i++ )
      for ( j=0; j<3; j++ )
      {
        if(M[i][j]==0)
          if(j==i)
            printf("\nNao eh simetrica\n");


      }
    for ( i=0; i<3; i++ )
      for ( j=0; j<3; j++ ){
        printf("%d", M[i][j]);
      }
  return 0;
}


int main()
{
    int M[3][3];
    int i, j;
    for ( i=0; i<3; i++ )
      for ( j=0; j<3; j++ ){
        if(j!=i)
            M[i][j]=0;
        if(j==i)
            M[i][j]=25;
      }
    identificaMatriz(M);
    return 0;
}
