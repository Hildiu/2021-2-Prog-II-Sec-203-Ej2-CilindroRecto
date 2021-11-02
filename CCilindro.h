//
// Created by MARIA HILDA BERMEJO RIOS on 11/2/21.
//

#ifndef PROG_II_SEC203_2NOV_EJ2_CCILINDRO_H
#define PROG_II_SEC203_2NOV_EJ2_CCILINDRO_H

#include <iostream>
using namespace std;

using tnumero = double;
const double PI=3.14156;

class CCilindro
{
  private:
    tnumero radio;
    tnumero altura;
  public:
    CCilindro() {};
    CCilindro(tnumero _radio, tnumero _altura):radio(_radio), altura(_altura){};
    virtual ~CCilindro() { cout <<"\nDestruyendo objeto.....";}
    //----- metodos de acceso
    void setRadio(tnumero _radio) { radio = _radio;}
    tnumero getRadio() {return radio;}
    void setAltura( tnumero _altura) { altura=_altura;};
    tnumero getArltura(){ return altura;}
    //---- otros metodos---
    tnumero areaDelaSuperficieCilindrica();
    tnumero areaLateral();
    tnumero areaTotal();
    tnumero volumen();
};


#endif //PROG_II_SEC203_2NOV_EJ2_CCILINDRO_H
