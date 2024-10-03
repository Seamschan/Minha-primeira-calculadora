#include <iostream>
#include <cmath>


int main() {
double num1, num2, resultado;
char operacao;

std::cout << "Digite seu primeiro numero:";
std::cin >> num1;

std::cout << "Digite seu tipo de sinal (+,-,*,/,^, s para sqrt, c para cos, t para tan):";
std::cin >> operacao;

if (operacao == 's') {
    if (num1 < 0) {
        std::cout << "Nao existe raiz quadrada de numero negativo." << std::endl;
        return 1;
    }
    resultado = sqrt(num1);
    std::cout << "Seu resultado eh:" << resultado << std::endl;
} else if (operacao == 'c') {
    resultado = cos(num1);
    std::cout << "Seu resultado eh:" << resultado << std::endl;
} else if (operacao == 't') {
    resultado = tan(num1);
    std::cout << "Seu resultado eh:" << resultado << std::endl;

} else {
    std::cout << "Digite seu segundo numero:";
    std::cin >> num2;
} switch (operacao) {
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
        if (num2 == 0) {
            std::cout << "Nao existe divisao por zero." << std::endl;
            return 1;
        }
        resultado = num1 / num2;
        break;
    case '^':
        resultado = (num1, num2);
        break;
    default:
        std::cout << "Operacao invalida" << std::endl;
        return 1;
    }
    std::cout << "Seu resultado eh:" << resultado << std::endl;
    return 0;
}    