#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"



int main()
{
    Cpf cpf("200.234.350.05");
    Titular titular(cpf, "Luciano");
    Conta conta1("123456", titular);
   
    conta1.depositar(500);
       
    std::cout << "Saldo conta: " << conta1.getSaldo() << " Nome Titular: " << conta1.getTitular().getNomeTitular() << "Numero conta: " << conta1.getNumeroConta() << std::endl;
    std::cout << "Numero de contas: " << Conta::recuperaNumeroDeContas() << std::endl;

    return 0;
}
