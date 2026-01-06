#include "Fisica.h"
#include "Geometria.h"
#include "math.h"


double CalculaVelocidadeMedia(double xInicial, double yInicial, double xFinal, double yFinal, int tempo)
{
    double percurso, VelocidadeMedia;
    percurso = CalculaDistanciaPontos2D(xInicial, yInicial, xFinal, yFinal);
    VelocidadeMedia = percurso/tempo;
    return VelocidadeMedia;
}
double CalculaForcaResultante(double F1, double F2)
{
    double ForcaResultante;
    ForcaResultante = sqrt(F1*F1 + F2*F2);
    return ForcaResultante;
}
