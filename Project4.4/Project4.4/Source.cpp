// Lab_04.4.cpp
// ������������ ������
// ����������� ������ No 4.4
// ��������� �������, ������ ��������
// ������ 3

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double R, x, xp, xk, dx, y, Pi = 4 * atan(1.0);

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x < (-7 - R))
			y = R;
		else
			if (x >= (-7 + R) && x <= (-4))
				y = R;
			else
				if (x >= (-7 - R) && x <= (-7 + R))
					y = sqrt(pow(R, 2) - pow(x, 2) - 14 * x - 49);
				else
					if (x > (-4) && x < 0)
						y = (R * (8 + x)) / 4;
					else
						if (x >= 0 && x < Pi)
							y = sin(x);
						else
							y = 1 * x - Pi;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	
	return 0;
}