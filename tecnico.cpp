#include <iostream>
#include "tecnico.hpp"

using namespace std;

// Construtor Padrão
TecnicoADM::TecnicoADM(){
  adicional = 0.25;
}

// Construtor Carregado
TecnicoADM::TecnicoADM(float newAdicional, string newFuncaoDesempenhada){
  adicional = newAdicional;
  funcaoDesempenhada = newFuncaoDesempenhada;
}

// Funções de Acesso
float TecnicoADM::getAdicional(){
  return adicional;
}

string TecnicoADM::getFuncaoDesempenhada(){
  return funcaoDesempenhada;
}

// Funções de Modificação
void TecnicoADM::setAdicional(float novoAdicional){
  adicional = novoAdicional;
}

void TecnicoADM::setfuncaoDesempenhada(string novaFuncaoDesempenhada){
  funcaoDesempenhada = novaFuncaoDesempenhada;
}