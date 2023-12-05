#include <iostream>
#include "endereco.hpp"

using namespace std;

// Construtor Padrão
Endereco::Endereco(){

}

// Construtor Carregado
Endereco::Endereco(string newRua, int newNumero, string newBairro, string newCidade, string newCep){

    rua = newRua;
    numero = newNumero;
    bairro = newBairro;
    cidade = newCidade;
    cep = newCep;

}

// Funções de Acesso
string Endereco::getRua(){
    return rua;
}

int Endereco::getNumero(){
    return numero;
}

string Endereco::getBairro(){
    return bairro;
}

string Endereco::getCidade(){
    return cidade;
}

string Endereco::getCep(){
    return cep;
}

// Funções de Modificação
void Endereco::setRua(string novaRua){
    rua = novaRua;
}

void Endereco::setNumero(int novoNumero){
    numero = novoNumero;
}

void Endereco::setBairro(string novoBairro){
    bairro = novoBairro;
}

void Endereco::setCidade(string novaCidade){
    cidade = novaCidade;
}

void Endereco::setCep(string novoCep){
    cep = novoCep;
}