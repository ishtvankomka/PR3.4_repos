// Lab_03_4.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// ������������ � ����� ����
	if ((y <= 3 - (x - 2) * (x - 2) && y >= x) ||
		(y <= 3 - (x - 2) * (x - 2) && y >= -x && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
