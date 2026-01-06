#include"Financas.h"
#include "math.h"

double CalculaMontante_JurosSimples(double capital, double taxa, double tempo)
{
    double montanteSimples;
    montanteSimples = capital*(1+taxa/100)*tempo;

    return montanteSimples;
}
double CalculaMontante_JurosCompostos(double capital, double taxa, double tempo)
{
    double montanteComposto;
    montanteComposto = capital*(pow((1+(taxa/100)), tempo));

    return montanteComposto;
}
