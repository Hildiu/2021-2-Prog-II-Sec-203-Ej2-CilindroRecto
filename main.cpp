#include "CCilindro.h"

int main()
{
  tnumero r,a;

  cout << "Radio : ";
  cin >> r;
  cout << "Altura : ";
  cin >> a;

  CCilindro Objeto(r,a);

  cout << "Area de la superficie Cilindrica: " << Objeto.areaDelaSuperficieCilindrica() << "\n";
  cout << "Area lateral                    : " << Objeto.areaLateral() << "\n";
  cout << "Area total                      : " << Objeto.areaTotal() << "\n";
  cout << "Volumen                         : " << Objeto.volumen() << "\n";
  return 0;
}
