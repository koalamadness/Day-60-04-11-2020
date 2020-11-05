#include <iostream>
#include "arreglo.h"
#include "computadora.h"

int main() {

  Arreglo<Computadora> computadoras;

  Computadora c01("Windows 8", 16, "Lenovo", 42760);
  Computadora c02("Windows Vista", 32, "Lenovo", 23420);
  Computadora c03("iOS", 64, "Mac", 23420);
  Computadora c04("LINUX", 8, "Lenovo", 20000);
  Computadora c05("Windows 10", 32, "HP", 32000);

  Computadora c06("LINUX", 32, "Asus", 54000);
  Computadora c07("Windows XP", 32, "Lenovo", 55000);


  computadoras << c01 << c02 << c03 << c04 << c05;  

  Computadora *ptr1 = computadoras.buscar(c03);
  Computadora *ptr2 = computadoras.buscar(c06);

  if (ptr1 != nullptr)
  {
    
    cout << "Computadora encontrada: " << endl;
    cout << *ptr1 << endl;
  }
  else
  {
    cout << "Computadora no encontrada " << endl;
  }

  if (ptr2 != nullptr)
  {
    cout << "Computadora encontrada: " << endl;
    cout << *ptr2 << endl;
  }
  else
  {
    cout << "Computadora no encontrada" << endl;
  }

  Arreglo<Computadora*> ptrs = computadoras.buscar_todos(c07);

  if (ptrs.size() > 0)
  { 
    cout << "Computadoras encontradas: " << endl;
    for(size_t i = 0; i < ptrs.size();i++)
    {

      Computadora *c = ptrs[i];
      cout << *c << endl;
    }
  }
  else 
  {
    cout << "No existen " << endl;
  }
}