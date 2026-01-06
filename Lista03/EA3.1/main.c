#include <stdio.h>
#include <stdlib.h>

int main()
{
    float prova1, prova2, trabalho1, trabalho2, md_bimestre1, md_bimestre2, semestre;
    scanf("%f%f%f%f", &prova1, &prova2, &trabalho1, &trabalho2);
    md_bimestre1 = (prova1*0.7)+(trabalho1*0.3);
    md_bimestre2 = (prova2*0.7)+(trabalho2*0.3);
    semestre = (md_bimestre1+md_bimestre1)/2;
    printf("A nota semestral do aluno eh de %f\n", semestre);
    return 0;
}
