#include <iostream>
#include <cmath>
using namespace std;

/*Untuk setiap n yang ditandai adalah jumlah data percobaan*/

int main () 
{  // n = Jumlah data
    double val[n] = {data, data, ...}; // Input data percobaan
    double sum = 0.0, mean, variable = 0.0, stdDev, percent;
    int i;
    // Rata - rata
    for(i = 0; i < n; ++i) // n = Jumlah data
        sum += val[i];
        cout << sum << "\n";
        mean = sum / n; // n = Jumlah data
        cout << "Rata-ratanya adalah " << mean << "\n";
    
    // Standar Deviasi
    for(i = 0; i < n; ++i) // n = Jumlah data
        variable += pow(mean - val[i], 2);
        cout << variable << "/90" << "\n";
        variable = variable / 90;
        stdDev = sqrt(variable);
        cout << "Standar deviasinya adalah " << stdDev << "\n";
    
    // Ketelitian
        percent = abs(1- stdDev/mean);
        cout << "Ketelitiannya adalah " << percent;
    return 0;
}