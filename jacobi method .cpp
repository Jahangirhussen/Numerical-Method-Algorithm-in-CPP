#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "JAHANGIR HUSSEN \n  CSE2201025011\n 25A1 \n Jacobi Method\n";
    float x1, y1, z1, x2, y2, z2;
    float E = 0.001;

    cout << "Enter the value of x1: ";
    cin >> x1;
    cout << "Enter the value of y1: ";
    cin >> y1;
    cout << "Enter the value of z1: ";
    cin >> z1;
int i=1;// i means step number or itteration number when x1=x2
    while (1)
    {
        x2 = (12 - 2 * y1 - z1) / 5;
        y2 = (15 - x1 - 2 * z1) / 4;
        z2 = (20 - x1 - 2 * y1) / 5;

        if (fabs(x2 - x1) < E && fabs(y2 - y1) < E && fabs(z2 - z1) < E)
        {
            cout << "X: " << x2 << "\nY: " << y2 << "\nZ: " << z2 << endl;
            cout<<"step ==  "<<i<<endl;
            break;
        }

        x1 = x2;
        y1 = y2;
        z1 = z2;
    }
}
