#pragma once
#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"

class Conta
{

private:
    static int numeroContas;

public:
    static int recuperaNumeroDeContas();

private:
    std::string numeroConta;
    Titular titular;
    float saldo;

public:
    Conta(std::string numeroConta, Titular titular);
    ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);  
    float getSaldo() const;
    Titular getTitular();
    void definirNumeroConta(std::string numero);
    std::string getNumeroConta();
};