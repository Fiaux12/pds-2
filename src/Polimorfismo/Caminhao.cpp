#ifndef CAMINHAO
#define CAMINHAO
#include <string>
#include <iostream>
#include "Veiculo.cpp"

using std::cout;
using std::endl;
using std::string;

class Caminhao : public Veiculo {
    private:
        int eixos;

    public:
        Caminhao(const string& marca, const string& modelo, int capacidade, int eixos)
            : Veiculo(marca, modelo, capacidade), eixos(eixos)
        {}
        
        void exibirDados() const override 
        {
            cout << "Caminhao - ";
            Veiculo::exibirDados();
            cout << "Eixos: " << eixos << "\n";
        }
};
#endif
