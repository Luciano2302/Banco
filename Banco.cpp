#include <iostream>
#include <string>
#include "Conta.hpp"



int main()
{
    Conta umaConta;
    umaConta.numero = "123456";
    umaConta.cpfTitular = "123.456.789-10";
    umaConta.nomeTitular = "Vinicius";
    umaConta.saldo = 100;

    Conta umaOutraConta;
    umaOutraConta.depositar(500);
    umaOutraConta.sacar(200);
    
    umaConta.saldo = 1000;

    std::cout << "Uma conta: " << umaConta.saldo << " Outra conta: " << umaOutraConta.saldo << std::endl;

    return 0;
}
