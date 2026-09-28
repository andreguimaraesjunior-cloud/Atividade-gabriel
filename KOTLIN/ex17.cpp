#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int segredo = rand() % 10 + 1:
    int palpite = 0;
    int tentativa = 0;

    while (tentativa < 5 && palpite != segredo) {
        cout << "Palpite de 1 a 10: ";
        cin >> palpite:
        tentatit=va++;
        if (palpite == segredo) {
            cout << "Acertou em " << tentativa << " tentativa(s)!\n";
        } else if (palpite < segredo) {
            cout << "Tente um número maior.\n";
        } else {
            cout << "Tente um número menor.\n";
        }
        return 0;
}
