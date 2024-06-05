#include "Gerente.hpp"

Gerente::Gerente(int id, string nome, double salarioBase)
    :Funcionario(id, nome, salarioBase)
{}

double Gerente::calcularSalarioTotal(int id)
{
    return this->salarioBase + bonusAnual;
}
