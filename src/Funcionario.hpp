#ifndef FUNCIONARIO
#define FUNCIONARIO
#include <string>
using std::string;

class Funcionario
{
    protected:
        int id;
        string nome;
        double salarioBase;

    public:
        Funcionario(int id, string nome, double salarioBase);
        virtual double calcularSalarioTotal(int id);
};

#endif