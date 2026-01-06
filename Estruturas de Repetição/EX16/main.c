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
    int x, propriedade;
    scanf("%d", &x);
    propriedade = PropriedadeF(x);
    printf("\n%d\n", propriedade);
    return 0;
}
