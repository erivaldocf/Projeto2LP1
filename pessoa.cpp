#include <iostream>
#include "pessoa.hpp"

using namespace std;

// Construtor Padrão
Pessoa::Pessoa(){
  
}

// Construtor Carregado
Pessoa::Pessoa(string newNome, string newCpf, string newDataNascimento, string newGenero, Endereco newEndereco){
  nome = newNome;
  cpf = newCpf;
  dataNascimento = newDataNascimento;
  genero = newGenero;
  endereco = newEndereco;
}


// Funcões de acesso
string Pessoa::getNome(){
  return nome;
}

string Pessoa::getCpf(){
  return cpf;
}

string Pessoa::getDataNascimento(){
  return dataNascimento;
}

string Pessoa::getGenero(){
  return genero;
}

Endereco Pessoa::getEndereco(){
  return endereco;
}

//Funcões de Modificação
void Pessoa::setNome(string novoNome){
  nome = novoNome;
}

void Pessoa::setCpf(string novoCpf){
  cpf = novoCpf;
}

void Pessoa::setDataNascimento(string novaDataNascimento){
  dataNascimento = novaDataNascimento;
}

void Pessoa::setGenero(string novoGenero){
  genero = novoGenero;
}

void Pessoa::setEndereco(Endereco novoEndereco){
  endereco = novoEndereco;
}