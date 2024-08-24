#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     float E = 0.001;

    float x1, y1, z1;

    cout << "Enter the value of X1: ";
    cin >> x1;

    cout << "Enter the value of Y1: ";
    cin >> y1;

    cout << "Enter the value of Z1: ";
    cin >> z1;

    while (true)
    {
        // Gauss-Seidel Method
        float x2 = (12 - 2 * y1 - z1) / 5.0;
        float y2 = (15 - x2 - 2 * z1) / 4.0;
        float z2 = (20 - x2 - 2 * y2) / 5.0;

        if (fabs(x2 - x1) < E && fabs(y2 - y1) < E && fabs(z2 - z1) < E)
        {
            cout << "X: " << x2 << endl;
            cout << "Y: " << y2 << endl;
            cout << "Z: " << z2 << endl;
            break;
        }

        // Update values
        x1 = x2;
        y1 = y2;
        z1 = z2;
    }

    return 0;
}
