#include <iostream>
using namespace std;
int main () {
    int dziesietna, binarna = 0, reszta, produkt = 1;
    cout << "Podaj liczbe w formie dziesietnej: " << endl;
    cin >> dziesietna;
        while (dziesietna !=0){
            reszta = dziesietna % 2;
            binarna = binarna + (reszta * produkt);
            dziesietna = dziesietna / 2;
            produkt *= 10;
        }
    cout << "Forma binarna tej liczby to: " << binarna;
    return 0;
}
