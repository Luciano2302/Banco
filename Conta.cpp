#include "Conta.hpp"
#include <iostream>

void Conta::sacar(float valorASacar) {
    if (valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    if (valorASacar > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }

    saldo -= valorASacar;
}


void Conta::depositar(float valorADepositar) {
    if (valorADepositar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    saldo += valorADepositar;
}

float Conta::getSaldo() const {
  return saldo;
}

void Conta::definirNomeTitular(std::string nome) {
    nomeTitular = nome;
}

std::string Conta::getNomeTitular() {
    return nomeTitular;
}

void Conta::definirCPFTitular(std::string cpf) {
    cpfTitular = cpf;
}

std::string Conta::getCPFTitular() {
    return cpfTitular;
}

void Conta::definirNumeroConta(std::string numero) {
    numeroConta = numero;
}

std::string Conta::getNumeroConta() {
    return numeroConta;
}