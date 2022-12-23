
#include <iostream>

using namespace std;

int main()
{
	int total, nominal, bonuspulsa, bonussms;

	cout << "Isi Pulsa : ";
	cin >> nominal;
	if (nominal >= 100000)
	{
		bonuspulsa = 10000;
		bonussms = 160;
	}
	else if (nominal >= 50000)
	{
		bonuspulsa = 5000;
		bonussms = 100;
	}
	else if (nominal >= 26000)
	{
		bonuspulsa = 0;
		bonussms = 60;
	}
	else
	{
		bonuspulsa = 0;
		bonussms = 0;
	}
	total = nominal + bonuspulsa;
	cout << "Pulsa : " << total << endl;
	cout << "Bonus SMS : " << bonussms << endl;
}

