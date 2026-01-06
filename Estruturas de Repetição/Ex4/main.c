#include <stdio.h>
#include <stdlib.h>

int ParOuImpar(int x)
{
    if (x%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n1, n2, contador;
    scanf("%d%d", &n1, &n2);
    if (n1>n2){
       contador=n2;
       while (contador<n1){
           if (ParOuImpar(contador)==1){
               printf("\n%d", contador);

           }
           contador++;
       }
    }
    else{
        if (n2>n1){
        contador = n1;
       while (contador<n2){
            if(ParOuImpar(contador)==1){
             printf("\n%d", contador);}
          contador++;
        }
        }
    }


    return 0;
}
