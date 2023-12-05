#ifndef ENDERECO_HPP
#define ENDERECO_HPP

#include <iostream>

class Endereco{

public:

    // Variaveis
    std::string rua;
    int numero;
    std::string bairro;
    std::string cidade;
    std::string cep;

    // Construtor Padrão

    Endereco();

    // Construtor Carregado

    Endereco(std::string, int, std::string,std::string,std::string);

    // Funções de Acesso
    std::string getRua();

    int getNumero();

    std::string getBairro();

    std::string getCidade();

    std::string getCep();

    //Funções de Modificação

    void setRua(std::string NovaRua);

    void setNumero(int novoNumero);

    void setBairro(std::string novoBairro);

    void setCidade(std::string novaCidade);

    void setCep(std::string novoCep);

};


#endif