#include <iostream>
#include "banco.hpp"
#include <vector>
#include <fstream>

using namespace std;

int main(){

  BancoDAO p;
  BancoDAO t;
  p.lerProfessores();
  t.lerTecnicos();

  int op;
  cout << "Qual menu você deseja entrar: " << endl;
  cout << "1- Menu do Professor" << endl;
  cout << "2- Menu do Tecnico" << endl;
  cin >> op;

  if (op == 1)
    p.menuProfessores();
  else if (op == 2)
    t.menuTecnicos();

}