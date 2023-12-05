#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>

class Funcionario{

protected:

  // Variaveis
  std::string matricula;
  float salario;
  std::string departamento;
  int cargaHoraria;
  std::string dataIngresso;

public:
  // Construtor Padrão
  Funcionario();

  // Construtor Carregado
  Funcionario(std::string, float, std::string, int, std::string);

  // Funcões de Acesso
  std::string getMatricula();

  float getSalario();

  std::string getDepartamento();


  int getCargaHoraria();
  
  std::string getDataIngreso();
  


  // Funções de Modificação
  void setMatricula(std::string novaMatricula);

  void setSalario(float novoSalario);

  void setDepartamento(std::string novoDepartamento);

  void setCargaHoraria(int novaCargaHoraria);

  void setDataIngresso(std::string novaDataIngresso);
  

};

#endif