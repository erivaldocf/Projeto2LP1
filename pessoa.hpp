#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include "endereco.hpp"

class Pessoa : public Endereco{

protected:

  // Variaveis
  std::string nome;
  std::string cpf;
  std::string dataNascimento;
  std::string genero;
  Endereco endereco;

public:
  // Constutor Padrão
  Pessoa();

  // Construtor Carregado
  Pessoa(std::string, std::string,std::string,std::string, Endereco);


  // Funções de Acesso
  std::string getNome();

  std::string getCpf();  

  std::string getDataNascimento();

  std::string getGenero();

  Endereco getEndereco();
 
  // Funções de Modificação
  void setNome(std::string novoNome);

  void setCpf(std::string novoCpf);

  void setDataNascimento(std::string novaDataNascimento);

  void setGenero(std::string novoGenero);

  void setEndereco(Endereco novoEndereco);

};

#endif