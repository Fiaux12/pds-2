#include "Funcionario.hpp"

Funcionario::Funcionario(int id, string nome, double salarioBase)
    :id(id), nome(nome), salarioBase(salarioBase)
{}

double Funcionario::calcularSalarioTotal()
{
    return salarioBase;
}
