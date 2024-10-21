/*1) Користувач вводить з клавіатури ціле шестизначне число. 
Написати програму, яка визначає, чи є введене число щасливим 
(щасливим вважається шестизначне число, у якого сума перших 3 цифр дорівнює сумі других трьох цифр). 
Якщо користувач ввів НЕ шестизначне число — повідомлення про помилку. 

2) Користувач вводить чотиризначне число.
Необхідно змінити в цьому числі 1 і 2 цифри, а також 3 і 4 цифри. 
Якщо користувач вводить не чотиризначне число, вивести повідомлення про помилку.

3) Користувач вводить з клавіатури 7 цілих чисел. 
Напишіть програму, яка визначає максимальне з цих 7 чисел (підказка — рішення має бути простим).*/

#include<iostream>
using namespace std;
int main() {
	int n, x, X, X1, X2, X3, X4, X5, X6, X7, s, a = 0;
	cout << "Oberite zadachy z chislami:\n"
		<< "1. Vuznachenna chu 6 znachne chislo shsluve chu ni\n"
		<< "2. Zminenna cifer v 4 znachnomy chisli\n"
		<< "3. Znahodzenna iz 7 chisel maksumalne\n";
	cin >> n;
	switch (n) {
	case 1:
		cout << "Znahodzenna shasluvogo chisla\n"
			<< "(y iakogo syma persuh 3 chisel = symi dryguh 3 chusel)\n\n"
			<< "Vvedite cile 6 znachne chislo: ";
		cin >> x;
		s = x;
		while (s != 0) {
			s /= 10;
			a++;
		}
		if (a == 6) {
			X1 = x / 1000;
			X2 = x - (X1 * 1000);
			X3 = (X1 / 100) + ((X1 - ((X1 / 100) * 100)) / 10) + (X1 % 10);
			X4 = (X2 / 100) + ((X2 - ((X2 / 100) * 100)) / 10) + (X2 % 10);
			cout << "\nVase chislo " << x << ((X3 == X4) ? " shaslive!\n" : " ne shaslive!\n");
		}
		else {
			cout << "\nVase chislo ne 6 znachne!\n";
		}
		  break;
	case 2: 
		cout << "Zminenna cifer v 4 znachnomy chisli\n"
			<< "(neobhidno zminutu mistsami 1 i 2 ta 3 i 4 cufru)\n\n"
			<< "Vvedite cile 4 znachne chislo: ";
		cin >> x;
		s = x;
		while (s != 0) {
			a++;
			X = s % 10;
			if (a == 1) {
				X1 = X;
			}
			else if (a == 2) {
				X2 = X;
			}
			else if (a == 3) {
				X3 = X;
			}
			else if (a == 4) {
				X4 = X;
			}
			s /= 10;
		}
		if (a == 4) {
			
			cout << "\nVase chislo " << x << " zmineno 1 i 2 ta 3 i 4 cufru: "
				<< (X1 * 10) + X2 + (X3 * 1000) + (X4 * 100) << endl;
		}
		else {
			cout << "\nVase chislo ne 4 znachne!\n";
		}
		  break;
	case 3: {
		cout << "Znahodzenna maksumalnogo chisla iz 7 chisel\n\n";	
		cin >> X1 >> X2 >> X3 >> X4 >> X5 >> X6 >> X7;
		int Max;
		if (X1 > X2) {
			Max = X1;
			cout << "\nChislo " << X1 << " maksumalne!\n";
		}
		else {
			Max = X2;
		}	
		if (Max < X3) {
			Max = X3;
		}
		if (Max < X4) {
			Max = X4;
		}
		if (Max < X5) {
			Max = X5;
		}
		if (Max < X6) {
			Max = X6;
		}
		if (Max < X7) {
			Max = X7;
		}
		cout << "\nChislo " << Max << " maksumalne!\n";
	}
		  break;
	default:cout << "Ne virno obrana zadacha!";
	}
}