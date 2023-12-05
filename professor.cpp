#include <iostream>
#include "professor.hpp"

using namespace std;

// Construtor Padrão
Professor::Professor(){
  
}

// Construtor Carregado
Professor::Professor(string newNivelProfessor, string newFormacaoProfessor, string newDisciplina){
  nivelProfessor = newNivelProfessor;
  formacaoProfessor = newFormacaoProfessor;
  disciplina = newDisciplina;
}

// Funções de Acesso
string Professor::getNivelProfessor(){
  return nivelProfessor;
}

string Professor::getFormacaoProfessor(){
  return formacaoProfessor;
}

string Professor::getDisciplina(){
  return disciplina;
}

// Funções de Modificação
void Professor::setNivelProfessor(string novoNivelProfessor){
  nivelProfessor = novoNivelProfessor;
}

void Professor::setFormacaoProfessor(string novaFormacaoProfessor){
  formacaoProfessor = novaFormacaoProfessor;
}

void Professor::setDisciplina(string novaDisciplina){
  disciplina = novaDisciplina;
}
