#ifndef TECNICO_HPP
#define TECNICO_HPP

#include <iostream>
#include "pessoa.hpp"
#include "funcionario.hpp"

class TecnicoADM : public Pessoa, public Funcionario{

  // Variaveis
  float adicional;
  std::string funcaoDesempenhada;

public:
 
  // Construtor Padrão
  TecnicoADM();

  // Construtor Carregado
  TecnicoADM(float, std::string);

  // Funções de Acesso
  float getAdicional();

  std::string getFuncaoDesempenhada();

  // Funções de Modificação
  void setAdicional(float novoAdicional);

  void setfuncaoDesempenhada(std::string novaFuncaoDesempenhada);

};




#endif