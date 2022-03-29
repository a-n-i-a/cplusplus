#include <iostream>
using namespace std;

int main()
{
  float kwota, wplata, suma_wplat, nadplata;

  cout << "Podaj potrzebna kwota: ";
  cin >> kwota;
  {
      if (kwota < 0){
         cout << "Wprowadzono bledna liczbe!!";
         return 0;
      }
      else {}
  }
  suma_wplat = 0;
  while (suma_wplat < kwota)
  {
      cout << "Wprowadz wplate: ";
      cin >> wplata;
      {
          if (wplata < 0) {
            cout << "Wprowadzono bledna liczbe " << endl;
            suma_wplat = suma_wplat - wplata;
            }
          else {}
      }
      suma_wplat = suma_wplat + wplata;
      cout << "Biezaca suma: " << suma_wplat << "zl" << endl;
  }
  nadplata = kwota - suma_wplat;

  cout << "Suma wplat wynosi: " << suma_wplat << "zl" << endl;
  cout << "Roznica miedzy kwota wplacona a nadplata: " << nadplata << "zl" << endl;

  return 0;
}
