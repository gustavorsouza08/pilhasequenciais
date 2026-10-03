#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string expressao;

    cout << "Digite a expressao pos-fixa: ";
    getline(cin, expressao);

    stack<double> pilha;
    stringstream ss(expressao);
    string token;

    while (ss >> token) {

        if (token == "+" || token == "*" ||
            token == "-" || token == "/") {

            if (pilha.size() < 2) {
                cout << "Expressao invalida!" << endl;
                return 0;
            }

            double b = pilha.top();
            pilha.pop();

            double a = pilha.top();
            pilha.pop();

            double resultado;

            if (token == "+") {
                resultado = a + b;
            }
            else if (token == "-") {
                resultado = a - b;
            }
            else if (token == "*") {
                resultado = a * b;
            }
            else {
                if (b == 0) {
                    cout << "Erro: divisao por zero!" << endl;
                    return 0;
                }

                resultado = a / b;
            }

            pilha.push(resultado);
        }
        else {
            pilha.push(stod(token));
        }
    }

    if (pilha.size() == 1) {
        cout << "Resultado: " << pilha.top() << endl;
    }
    else {
        cout << "Expressao invalida!" << endl;
    }

    return 0;
}
