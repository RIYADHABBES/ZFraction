#include <iostream>
#include "ZFraction.h"


using namespace std;

int main()
{
	/*ZFraction a(12, 8), b(7, 18);
	ZFraction c;
	a.Affiche();
	c = a + b;
	cout << endl;
	c.Affiche();
	c += b;
	cout << endl;
	c.Affiche();
	if (a < b)
	{
		cout << endl << "True" << endl;
	}
	else
	{
		cout << endl << "False" << endl;

	}
	if (a > b)
	{
		cout << endl << "True" << endl;
	}
	else
	{
		cout << endl << "False" << endl;

	}
	if (a != c)
	{
		cout << endl << "True" << endl;
	}
	else
	{
		cout << endl << "False" << endl;

	}

	cout << "Test oveload << flux " << a<< " Nice it works" << endl;
	cout << "Test cin >>" << endl;
	cin >> c;
	cout << "Test" << endl;
	c.Affiche();
*/
	ZFraction a(4, 5);      //Déclare une fraction valant 4/5
	ZFraction b(2);        //Déclare une fraction valant 2/1 (ce qui vaut 2)
	ZFraction c, d;         //Déclare deux fractions valant 0

	c = a + b;               //Calcule 4/5 + 2/1 = 14/5

	d = a * b;               //Calcule 4/5 * 2/1 = 8/5

	cout << a << " + " << b << " = " << c << endl;

	cout << a << " * " << b << " = " << d << endl;

	if (a > b)
		cout << "a est plus grand que b." << endl;
	else if (a == b)
		cout << "a est egal a b." << endl;
	else
		cout << "a est plus petit que b." << endl;
	return 0;
}