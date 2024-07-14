#include <iostream>
using namespace std;

int main()
{
    float y1, y2, x1, x2, x3;
    cout << "Enter x1 and x2: ";
    cin >> x1 >> x2;
    cout << "Enter the number of iterations: ";
    int n, i = 1;
    cin >> n;

    while (n--)
    {
        y1 = x1 * x1 - 4 * x1 - 10;
        y2 = x2 * x2 - 4 * x2 - 10;

        x3 = x2 - (y2 * (x2 - x1)) / (y2 - y1);
        cout << i << "st time, x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << endl;
        x1 = x2;
        x2 = x3;
        i++;
    }

    return 0;
}
