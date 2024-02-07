#pragma once
#include <string>
#include "Cpf.hpp"

class Titular {

private:
	Cpf cpfTitular;
	std::string nomeTitular;

public:
	Titular(Cpf cpfTitular, std::string nomeTitular);
	~Titular();
    void verificaTamanhodoNome();
	std::string getNomeTitular();
};