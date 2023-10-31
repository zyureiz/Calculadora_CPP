#include <iostream>

int main() {
    char operacao;
    double num1, num2, resultado;

    std::cout << "\nInsira o primeiro numero: ";
    std::cin >> num1;

    std::cout << "\nEscolha a operacao ( +  -  *  / ): ";
    std::cin >> operacao;

    std::cout << "\nInsira o segundo numero: ";
    std::cin >> num2;

    switch (operacao) {
        case '+':
            resultado = num1 + num2; 
            break;
        case '-':
            resultado = num1 - num2; 
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                std::cout << "\nOpa!! Nao e possivel dividir por zero!" << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "\nOperacao invalida!" << std::endl;
            return 1;
    }

    std::cout << "\nResultado: " << resultado << std::endl;

    return 0;
}