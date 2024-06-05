#ifndef ESTAGIARIO
#define ESTAGIARIO
#include "Funcionario.hpp"
#include <string>
using std::string;

class Estagiario: public Funcionario
{
    private:
        double bolcaEstagio;

    public:
        Estagiario(int id, string nome, double bolcaEstagio);
        double calcularSalarioTotal(int id) override;

};

#endif