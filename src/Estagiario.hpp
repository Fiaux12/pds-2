#ifndef ESTAGIARIO
#define ESTAGIARIO
#include "Funcionario.hpp"
#include <string>
using std::string;

class Estagiario: public Funcionario
{
    private:
        double bolsaEstagio;

    public:
        Estagiario(int id, string nome, double bolsaEstagio);
        double calcularSalarioTotal() override;

};

#endif