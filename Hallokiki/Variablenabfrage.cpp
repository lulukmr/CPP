/* Variablen Werte Abfragen*/

#include <iostream>
using namespace std;

int main()
{
	int x = 0, z = 87;

	cout << "Wert von x ist:" << x << endl;
	cout << "wert von z ist:" << z << endl;

	x = 86;
	x = x * z + 983;

	cout << "wert von x ist:" << x << endl;
	cout << "wert von z ist noch immer:" << z << endl;

	cout << "wert von x ist:" << x << endl;
	
	x = x + z;
	cout << "jetzt ist x + z:" << x << endl;

	return 0;
}
