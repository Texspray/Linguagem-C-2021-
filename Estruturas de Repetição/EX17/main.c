#include <stdio.h>
#include <stdlib.h>


int PropriedadeF(int n)
{
    int Digito1, Digito2, soma;
    if (n>=1000 && n<=9999){
        Digito1 = n/100;
        Digito2 = n%100;
        soma = Digito1 + Digito2;
        if (soma*soma == n)
            return 1;
        else
            return 0;
    }
    else
        return -1;

}
int main()
{
    int propriedade;
    int contador = 1000;
    while (contador<=9999){
        propriedade = PropriedadeF(contador);
        if (propriedade == 1)
        printf("\n%d", contador);
        contador++;
    }
    return 0;
}
