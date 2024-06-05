#include <algorithm>
#include <iostream>
#include <vector>
#include "Caminhao.cpp"
#include "Van.cpp"

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<Veiculo*> veiculos;

    Caminhao* c1 = new Caminhao("Scania", "5BN2FF", 500, 12);
    Caminhao* c2 = new Caminhao("Scania", "6BN2DD", 40000, 16);
    Caminhao* c3 = new Caminhao("Scania", "8BN2WW", 250, 8);
    Van* v1 = new Van("BMW", "K8900", 250, 15);
    Van* v2 = new Van("BMW", "A8900", 50, 10);
    Van* v3 = new Van("BMW", "B8900", 550, 25);

    veiculos.push_back(c1);
    veiculos.push_back(c2);
    veiculos.push_back(c3);
    veiculos.push_back(v1);
    veiculos.push_back(v2);
    veiculos.push_back(v3);

    for (auto& veiculo : veiculos) {
        veiculo->exibirDados();
        cout << "\n" << endl;
    }

  
    return 0;
}
