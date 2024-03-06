#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double val[10] = {28, 19.5, 1, 0.6, 6, 6.7, 4, 0.6, 11, 22};
    int valu[10] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180};

    for(int i = 0; i < 10; ++i)
    {
        double result = val[i] * pow(cos(valu[i]), 2);
        cout << "Result for val[" << i << "] = " << result << endl;
    }
    return 0;
}