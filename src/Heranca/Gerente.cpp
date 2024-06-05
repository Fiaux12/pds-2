#include "Gerente.hpp"

Gerente::Gerente(int id, string nome, double salarioBase, double bonusAnual)
    :Funcionario(id, nome, salarioBase), bonusAnual(bonusAnual)
{}

double Gerente::calcularSalarioTotal()
{
    return salarioBase + bonusAnual;
}
