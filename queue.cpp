#include <iostream>
#include <queue>   // biblioteca para usar fila (queue)
using namespace std;

int main() {
    // Criação da fila de super-heróis
    queue<string> filaHerois;

    
    filaHerois.push("Homem-Aranha");
    filaHerois.push("Homem de Ferro");
    filaHerois.push("Capitão América");
    filaHerois.push("Thor");
    filaHerois.push("Hulk");
    filaHerois.push("Viúva Negra");

    
    cout << "=== VERIFICACAO INICIAL ===" << endl;
    cout << "Primeiro da fila: " << filaHerois.front() << endl;
    cout << "Ultimo da fila: " << filaHerois.back() << endl;
    cout << "Tamanho da fila: " << filaHerois.size() << endl << endl;

    
    filaHerois.pop(); // Remove "Homem-Aranha"
    filaHerois.pop(); // Remove "Homem de Ferro"

    
    cout << "=== VERIFICACAO FINAL ===" << endl;
    cout << "Novo primeiro da fila: " << filaHerois.front() << endl;
    cout << "Novo ultimo da fila: " << filaHerois.back() << endl;
    cout << "Novo tamanho da fila: " << filaHerois.size() << endl;

    return 0;
}
