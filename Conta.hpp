#pragma once
#include <iostream>
#include <string>
#include "Conta.hpp"

class Conta
{
private:
    std::string numeroConta;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo = 0;

public:
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float getSaldo() const;
    void definirNomeTitular(std::string nome);
    std::string getNomeTitular();
    void definirCPFTitular(std::string cpf);
    std::string getCPFTitular();
    void definirNumeroConta(std::string numero);
    std::string getNumeroConta();

};