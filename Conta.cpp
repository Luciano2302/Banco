#include "Conta.hpp"
#include <iostream>

int Conta::numeroContas = 0;

Conta::Conta(std::string numeroConta, std::string cpfTitular, std::string nomeTitular)
    :numeroConta(numeroConta), cpfTitular(cpfTitular),nomeTitular(nomeTitular), saldo(0)
{
    numeroContas++;
}

Conta::~Conta() {
    numeroContas--;
}

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

int Conta::recuperaNumeroDeContas() {
    return numeroContas;
}

void Conta::verificaTamanhodoNome() {
    if (nomeTitular.size() < 5) {
        exit(1);
    }
}