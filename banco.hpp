#ifndef BANCO_HPP
#define BANCO_HPP

#include <iostream>
#include <vector>
#include "professor.hpp"
#include "tecnico.hpp"

class BancoDAO{

  std::vector<Professor> professores;
  std::vector<TecnicoADM> tecnicosADM;

public:

// Funções dos professores
void cadastrarProfessor(std::string nome, std::string cpf,std::string dataNascimento, std::string genero, std::string rua, int numero, std::string bairro, std::string cidade, std::string cep,std::string matricula, float salario, std::string departamento, int cargaHoraria, std::string dataIngresso, std::string nivelProfessor, std::string formacaoProfessor, std::string disciplina);
void listarProfessores();
void deletarProfessor(std::string matricula);
void buscarProfessor(std::string matricula);
void salvarProfessores();
void lerProfessores();
void menuProfessores();


// Funções dos tecnicos
void cadastrarTecnicoADM(std::string nome, std::string cpf,std::string dataNascimento, std::string genero, std::string rua, int numero, std::string bairro, std::string cidade, std::string cep, std::string matricula, float salario, std::string departamento, int cargaHoraria, std::string dataIngresso, std::string funcao);
void listarTecnicosADM();
void deletarTecnicoADM(std::string matricula);
void buscarTecnicoADM(std::string matricula);
void salvarTecnicos();
void lerTecnicos();
void menuTecnicos();

};


#endif