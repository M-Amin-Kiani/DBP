#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	char kind;
	long int t, i, x1, x2, y1, y2, deltax, deltay;
	double r;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> kind;
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		deltax = abs(x1 - x2);
		deltay = abs(y1 - y2);
		if (kind == 'E')
		{
			r = sqrt((deltax * deltax) + (deltay * deltay));
			cout << fixed << setprecision(6) << r << endl;
		}
		else if (kind == 'M')
		{
			r = abs(deltax) + abs(deltay);
			cout << fixed << setprecision(6) << r << endl;
		}
		else if (kind == 'C')
		{
			r = max(abs(deltax), abs(deltay));
			cout << fixed << setprecision(6) << r << endl;
		}
	}
	return 0;
}