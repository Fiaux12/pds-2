#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR
#include "Funcionario.hpp"
#include <string>
using std::string;

class FuncionarioRegular: public Funcionario
{
    public:
        FuncionarioRegular(int id, string nome, double salarioBase);
};

#endif