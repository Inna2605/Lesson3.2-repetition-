/*�������� ��������� ��������� 200$ + ������� �� �������, 
������ �� 500$ � 3%, �� 500 �� 1000 � 5%, ����� 1000 � 8%. 
���������� ������� � ��������� ����� ������� ��� ����� ���������. 
��������� ���� ��������, ��������� ���������� ���������, 
���������� ���� ����� 200$, ������� ������� �� �����. */

#include<iostream>
using namespace std;
int main() {
	int P = 0, Z = 200, PR = 200, V = 0, K = 0, n = 0, a = 0;
	while (n < 3) {
		n++;
		cout << "Vvedite riven prodazy menedzera " << n << ": ";
		cin >> P;
		if (P < 500 && P >= 0) {
			V = Z + ((P * 3) / 100);
		}
		else if (P >= 500 && P <= 1000) {
			V = Z + ((P * 5) / 100);
		}
		else if (P > 1000) {
			V = Z + ((P * 8) / 100);
		}
		else {
			cout << "Videmnoi prodazi ne isnye!\n";
		}
		cout << "Zarplata " << n << " menedzera stanovut: " << V << endl;
		if (K < V) {
			K = V;
			a = n;
		}
	}
	cout << "Naikrasii  menedzer " << a << " otrumye premiy " << PR << " do zarplatu " << K << " i mae vuplaty: " << K + PR << endl;
}