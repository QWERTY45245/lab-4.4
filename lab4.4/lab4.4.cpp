#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
#include<Windows.h>
using namespace std;
int main()
{
	double x, xp, xk, dx,y, R;
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Таблиця значення функції заданої графічно" << endl;
	cout << "---------------------------" << endl;
	cout <<  setw(7) << "y"  << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -8 - R)
			y = -R;
		else
			if (-8 - R < x && x <= -8 + R)
				y = (M_PI * (R + R)) / 2;
			else
				if (-8 + R < x && x <= 2)
					y = (2 * x + 16 + x * R) / (10 + R);
				else
					if (2 < x && x <= 6)
						y = 0;
					else
						y = (x - 6) * (x - 6);
		
	

		cout << "|" << setw(7) << setprecision(2) << y << " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	cin.get();
	return 0;
}