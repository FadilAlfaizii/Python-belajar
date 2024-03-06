#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Angka: ";
    cin >> x;
    if (x > 0) {
      cout << "Positif";
    } else if (x < 0) {
      cout << "Negatif";
    } else {
      cout << "Bilangan 0";
    }
  return 0;
}