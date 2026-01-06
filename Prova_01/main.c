#include <stdio.h>
#include <stdlib.h>
#include "Financas.h"
#include "Geometria.h"
#include "Fisica.h"

int main()
{
    // Financas
	printf("\n\nFinancas");

	float capital, taxa, tempo, montante;

    printf("\nDigite o valor do capital emprestado...\n");
    scanf("%f", &capital);

    printf("\nDigite o valor da taxa de juros do emprestimo (0-100)...\n");
    scanf("%f", &taxa);

    printf("\nDigite o numero de periodos do emprestimo...\n");
    scanf("%f", &tempo);

    montante = CalculaMontante_JurosSimples(capital, taxa, tempo);
    printf("\nO valor do Montante do juros simples eh: %.2f\n", montante);


    montante = CalculaMontante_JurosCompostos(capital, taxa, tempo);
    printf("\nO valor do montante do juros compostos eh: %.2f\n", montante);



    //Geometria
    printf("\n\nGeometria");
    float x1, y1, x2, y2, distancia_pontos, area;
    printf("\nDigite as cordenadas de dois pontos em um plano 2D (x1, y1, x2, y2)\n");
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

    distancia_pontos = CalculaDistanciaPontos2D(x1, y1, x2, y2);
    printf("A distancia dos pontos eh de: %.2f", distancia_pontos);

    printf("\nDigite as cordenadas de dois pontos de vértices opostas de um retangulo (xSE, ySE, xID, yID)\n");
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

    area = CalculaAreaRetangulo(x1, y1, x2, y2);
    printf("A area do retangulo eh de: %.2f", area);




    //Fisica
    printf("\n\nFisica (Distancia em metros e tempo em segundos)");
    float xInicial, yInicial, xFinal, yFinal, F1, F2, VelocidadeMedia, ForcaR;
    printf("\nDigite as cordenadas dos dois pontos no plano 2D (xInicial, yInicial, xFinal, yFinal)\n");
    scanf("%f%f%f%f", &xInicial, &yInicial, &xFinal, &yFinal);

    printf("\nDigite o tempo que demorou para percorrer a distancia nesse plano 2D\n");
    scanf("%f", &tempo);

    VelocidadeMedia = CalculaVelocidadeMedia(xInicial, yInicial, xFinal, yFinal, tempo);
    printf("\nA Velocidade Media eh: %.2f", VelocidadeMedia);


    printf("\nDigite duas forcas F1 e F2 perpendiculares para calcular sua forca resultante em Newtons\n");
    scanf("%f%f", &F1, &F2);

    ForcaR= CalculaForcaResultante(F1, F2);
    printf("A forca Resultante eh: %.2f", ForcaR);


    return 0;
}
