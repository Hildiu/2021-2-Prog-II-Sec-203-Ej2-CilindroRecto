//
// Created by MARIA HILDA BERMEJO RIOS on 11/2/21.
//

#include "CCilindro.h"


tnumero CCilindro::areaDelaSuperficieCilindrica()
{
  return ( 2*PI*pow(radio,2));
}

tnumero CCilindro::areaLateral()
{
  return ( 2 *PI * radio *altura);
}

tnumero CCilindro::areaTotal()
{
  return ( areaDelaSuperficieCilindrica() + areaLateral());
}

tnumero CCilindro::volumen()
{
  return ( PI*pow(radio,2)*altura);
}