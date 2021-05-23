#include <iostream>
using namespace std;

int main()
{
    int a, min, max;
    cin >> a;
    min = max = a;
    for (int i = 1; i < 5; i++) {
        cin >> a;
        if (min > a) min = a;
        if (max < a) max = a;
    }
    cout << "max - " << max << " " << "min -: " << min;
}