#include "Estagiario.hpp"
#include <string>


Estagiario::Estagiario(int id, string nome, double bolsaEstagio)
    :Funcionario(id, nome, 0), bolsaEstagio(bolsaEstagio)
{}

double Estagiario::calcularSalarioTotal()
{
    return bolsaEstagio;
}
