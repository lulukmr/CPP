/* Variablen Werte Abfragen*/
#include <iostream>
using namespace std;
int main()
{
int x = 0, z = 87;
cout << "Wert von X ist:" << x << endl;
cout << "Wert von Z ist:" << z << endl;
x = 86;
x = x * z + 983;
cout << "Wert von X ist:" << x << endl;
cout << "Wert von Z ist noch immer:" << z << endl;
cout << "Wert von X ist:" << x << endl;
x = x + z;
cout << "Jetzt ist X + Z:" << x << endl;
return 0;
}
