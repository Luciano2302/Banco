#pragma once
#include <iostream>
#include <string>
#include "Conta.hpp"

struct Conta
{
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo;

    void sacar(float valorASacar);

    void depositar(float valorADepositar);

};