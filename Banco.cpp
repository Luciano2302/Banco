#include <iostream>
#include <string>
#include "Conta.hpp"



int main()
{
    Conta conta1("123456","123.444.555.05", "Luciano");
    Conta conta2("5555555", "355.554.665.04", "Valdemir");
    Conta conta3("4444444", "422.434.775.03", "Jussara");
   
    conta1.depositar(500);
       
    std::cout << "Saldo conta: " << conta1.getSaldo() << " Nome Titular: " << conta1.getNomeTitular() << "Numero conta: " << conta1.getNumeroConta() << std::endl;
    std::cout << "Saldo conta: " << conta2.getSaldo() << " Nome Titular: " << conta2.getNomeTitular() << "Numero conta: " << conta2.getNumeroConta() << std::endl;
    std::cout << "Saldo conta: " << conta3.getSaldo() << " Nome Titular: " << conta3.getNomeTitular() << "Numero conta: " << conta3.getNumeroConta() << std::endl;

    std::cout << "Numero de contas: " << Conta::recuperaNumeroDeContas() << std::endl;

    return 0;
}
