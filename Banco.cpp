#include <iostream>
#include <string>
#include "Conta.hpp"



int main()
{
    Conta umaConta;
    Conta umaOutraConta;
   
    umaConta.depositar(500);
    umaOutraConta.depositar(200);
        
    std::cout << "Uma conta: " << umaConta.getSaldo() << " Outra conta: " << umaOutraConta.getSaldo() << std::endl;

    return 0;
}
