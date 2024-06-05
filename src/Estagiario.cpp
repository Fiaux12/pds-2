#include "Estagiario.hpp"

Estagiario::Estagiario(int id, string nome, double salarioBase)
    :Funcionario(id, nome, 0), bolcaEstagio(bolcaEstagio)
{}

double Estagiario::calcularSalarioTotal(int id)
{
    return this->bolcaEstagio;
}
