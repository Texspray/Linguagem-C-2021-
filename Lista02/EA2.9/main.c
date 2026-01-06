#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;
    printf("Digite as 4 notas do aluno\n");
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    printf("A nota media eh %f\n", media);
    return 0;
}
