#include <iostream>
#include <string>
#include "FuncionarioRegular.hpp"
#include "Gerente.hpp"
#include "Estagiario.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    FuncionarioRegular* f1 = new FuncionarioRegular(1, "Julio", 1500);
    Gerente* f2 = new Gerente(2, "Livia", 2500, 500);
    Estagiario* f3 = new Estagiario(3, "Ana", 700);

    cout << "Funcionario Regular:\n " << f1->calcularSalarioTotal()<< endl;
    cout << "Gerente:\n " << f2->calcularSalarioTotal()<< endl;
    cout << "Estagiario:\n " << f3->calcularSalarioTotal()<< endl;
    
    delete f1;
    delete f2;
    delete f3;

    return 0;
}
