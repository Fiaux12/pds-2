#ifndef VAN
#define VAN
#include <string>
#include <iostream>
#include "Veiculo.cpp"

using std::cout;
using std::endl;
using std::string;

class Van : public Veiculo {
    private:
        int passageiros;

    public:
        Van(const string& marca, const string& modelo, int capacidade, int passageiros)
            : Veiculo(marca, modelo, capacidade), passageiros(passageiros)
        {}

        void exibirDados() const override
        {
            cout << "Van - ";
            Veiculo::exibirDados();
            cout << "Passageiros: " << passageiros << "\n";
        }
};
#endif
