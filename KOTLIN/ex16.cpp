#include <iostream>
using namespace std;

int main() {
    double nota;
    cout << "Pontuação (0 a 10) ";
    cin >> nota;

    if (nota <0 || nota > 10) {
        count << "pontuação inválida.\n";
    } else if (nota < 4) {
        count << "Insatisfatório\n";
    } else if (nota < 6) {
        count << "Regular\n"
    } else if (nota < 8) {
        count << "Bom\n";
    } else {
        count << "Excelente\n";
    }
    return 0;
}
