#include "Conta.hpp"
#include "Titular.hpp"
#include <iostream>

int Conta::numeroContas = 0;

Conta::Conta(std::string numeroConta, Titular titular)
    :numeroConta(numeroConta),
    titular(titular),
    saldo(0)
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

void Conta::definirNumeroConta(std::string numero) {
    numeroConta = numero;
}

std::string Conta::getNumeroConta() {
    return numeroConta;
}

int Conta::recuperaNumeroDeContas() {
    return numeroContas;
}

Titular Conta::getTitular() {
    return titular;
}

