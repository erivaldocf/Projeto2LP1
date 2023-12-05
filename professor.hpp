#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <iostream>
#include "pessoa.hpp"
#include "funcionario.hpp"

class Professor : public Pessoa, public Funcionario{

  // Variaveis
  std::string nivelProfessor;
  std::string formacaoProfessor;
  std::string disciplina;

public:
  // Construtor Padrão
  Professor();

  //Construtor Carregado
  Professor(std::string, std::string, std::string);

  // Funções de Acesso
  std::string getNivelProfessor();

  std::string getFormacaoProfessor();

  std::string getDisciplina();

  // Funções de Modificação
  void setNivelProfessor(std::string novoNivelProfessor);

  void setFormacaoProfessor(std::string novaFormacaoProfessor);

  void setDisciplina(std::string novaDisciplina);
};

#endif