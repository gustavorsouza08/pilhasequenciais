if (token == "+") {
    resultado = a + b;
}
else if (token == "-") {
    resultado = a - b;
}
else if (token == "*") {
    resultado = a * b;
}
else if (token == "/") {

    if (b == 0) {
        cout << "Erro: divisao por zero!" << endl;
        return 0;
    }

    resultado = a / b;
}
