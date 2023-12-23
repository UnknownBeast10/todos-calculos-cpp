#include <iostream>
#include "Matematica.h"

int main() {
	int Numero1, Numero2;
	std::cout << "Digite Primeiro Numero: ";
	std::cin >> Numero1;
	std::cout << "Digite Segundo Numero: ";
	std::cin >> Numero2;
	std::cout << "\nResultado Operadores Matematicos\n";
	std::cout << "\nSoma: " << Soma(Numero1, Numero2);
	std::cout << "\nSubtacao: " << Subtracao(Numero1, Numero2);
	std::cout << "\nMultiplicacao: " << Multiplicacao(Numero1, Numero2);
	std::cout << "\nDivisao: " << Divisao(Numero1, Numero2);
	std::cout << "\nPotencia: " << Potencia(Numero1, Numero2);
	std::cout << "\nRaizQuadrada Numero1: " << RaizQuadrada(Numero1);
	std::cout << "\nRaizQuadrada Numero2: " << RaizQuadrada(Numero2) << std::endl;
	system("PAUSE");
	return 0;
}