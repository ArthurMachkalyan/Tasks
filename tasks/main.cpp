#include <iostream>
using namespace std;
#define task1
void main()
{
	setlocale(LC_ALL, "russian");
#ifdef task1
	double m1, m2, m3, m4, m5, total_m, sr_arf;
	total_m = 5;
	cout << "Введите оценки: "; cin >> m1; cin >> m2; cin >> m3; cin >> m4; cin >> m5;
	cout << "\n";
	sr_arf = (m1 + m2 + m3 + m4 + m5) / total_m;
	if (sr_arf >= 4)
	{
		cout << sr_arf; cout << " Допуск" << endl;
	}
	else
	{
		cout << sr_arf; cout << " Не допуск" << endl;
	}
#endif
}