#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, y, R;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;
    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(5) << "x" << setw(4) << " |"
        << setw(6) << "y" << setw(6) << " |" << endl;
    cout << "----------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        if (x <= -R)
            y = -8;
        else
            if (x > -R && x <= 0)
                y = (8 / R) * x - 8;
            else
                if (x > 0 && x <= R)
                    y = -sqrt(R * R - x * x);
                else
                    if (x > R && x <= 5)
                        y = (3 / (5 - R)) * (x - R);
                    else
                        y = 3;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "----------------------" << endl;
    return 0;
}