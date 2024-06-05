#ifndef GERENTE
#define GERENTE
#include "Funcionario.hpp"
#include <string>
using std::string;

class Gerente: public Funcionario
{
    private:
        double bonusAnual;

    public:
        Gerente(int id, string nome, double salarioBase, double bonusAnual);
        double calcularSalarioTotal() override;

};

#endif