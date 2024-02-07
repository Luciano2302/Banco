#include "Titular.hpp"
#include "Cpf.hpp"
#include <iostream>


	Titular::Titular(Cpf cpfTitular, std::string nomeTitular):cpfTitular(cpfTitular), nomeTitular(nomeTitular)
	{
		verificaTamanhodoNome();
	};

	Titular::~Titular() {
		
	}
	

	void Titular::verificaTamanhodoNome() {
		if (nomeTitular.size()	 < 5) {
			std::cout << "Nome muito curso" << std::_Get_asan_aligned_first_end;
			exit(1);
		}
	}

	std::string Titular::getNomeTitular() {
		return nomeTitular;
	}
