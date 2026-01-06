#include "Geometria.h"
#include "math.h"

double CalculaDistanciaPontos2D(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2-x1), 2)+ pow((y2-y1),2));

}

double CalculaAreaRetangulo(double xSE, double ySE, double xID, double yID)
{
    double distancia, area, base, altura;
    distancia = CalculaDistanciaPontos2D(xSE, ySE, xID, yID);
    base = sqrt(distancia*distancia-pow((yID-ySE),2));
    altura = sqrt(distancia*distancia-pow((xSE-xID), 2));
    area = base*altura;
    return area;


}
