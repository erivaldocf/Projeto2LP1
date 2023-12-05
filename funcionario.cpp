#include <iostream>
#include "funcionario.hpp"

using namespace std;

// Construtor Padrão
Funcionario::Funcionario(){
  salario = 0.0;
  cargaHoraria = 0;
}

// Construtor Carregado
Funcionario::Funcionario(string newMatricula, float newSalario, string newDepartamento, int newCargaHoraria, string newDataIngresso){
  matricula = newMatricula;
  salario = newSalario;
  departamento = newDepartamento;
  cargaHoraria = newCargaHoraria;
  dataIngresso = newDataIngresso;
}

// Funções de Acesso
string Funcionario::getMatricula(){
  return matricula;
}

float Funcionario::getSalario(){
  return salario;
}

string Funcionario::getDepartamento(){
  return departamento;
}

int Funcionario::getCargaHoraria(){
  return cargaHoraria;
}

string Funcionario::getDataIngreso(){
  return dataIngresso;
}

// Funções de Modificação
void Funcionario::setMatricula(string novaMatricula){
  matricula = novaMatricula;
}

void Funcionario::setSalario(float novoSalario){
  salario = novoSalario;
}

void Funcionario::setDepartamento(string novoDepartamento){
  departamento = novoDepartamento;
}

void Funcionario::setCargaHoraria(int novaCargaHoraria){
  cargaHoraria = novaCargaHoraria;
}

void Funcionario::setDataIngresso(string novaDataIngresso){
  dataIngresso = novaDataIngresso;
}
