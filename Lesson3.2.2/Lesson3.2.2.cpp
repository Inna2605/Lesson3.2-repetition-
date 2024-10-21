/*Вантажний літак має пролетіти з вантажем із пункту А в пункт С через пункт В. 
Ємність бака для палива в літака — 300 літрів. 
Споживання палива на 1 км залежно від ваги вантажу в літака наступне:
■ до 500 кг: 1 літрів/км;
■ до 1000 кг: 4 літрів/км;
■ до 1500 кг: 7 літрів/км;
■ до 2000 кг: 9 літрів/км;
■ більше ніж 2000 кг літак не піднімає.
Користувач вводить відстань між пунктами А і В, і відстань між пунктами В і С, а також вагу вантажу. 
Програма має розрахувати, яка мінімальну кількість палива необхідна для дозаправки літака в пункті В, 
щоб долетіти з пункту А в пункт С. У разі неможливості подолати будьяку з відстаней, 
програма має вивести повідомлення про неможливість польоту за введеним маршрутом*/

#include<iostream>
using namespace std;
int main() {
	float Sab, Sbc, M, B = 300, V = 0, P = 0;
	cout << "Vvedite vidstan miz A i B ta B i C: ";
	cin >> Sab >> Sbc;
	cout << "\nVvedite vagy vantazy: ";
	cin >> M;
	if (M <= 500 && M >= 0) {
		P = Sab;
		if (P <= 300 && P > 0) {
			cout << "\nMinimalna kilkist paluva do pynkta B = " << P
				<< "\nDozapravutu paluva potribno " << Sbc << " chtobu doletitu do C\n";
		}
		else if (P == 0) {
			cout << "\nPolit ne mozluvui! Nemae paluva!\n";
		}
		else if (P < 0) {
			cout << "\nPolit ne mozluvui! Videmno zapravlenogo paluva ne isnue!\n";
		}
		else if (P > 300) {
			cout << "\nPolit ne mozluvui! Zapravlenogo baka ne vustachit!\n"
				<< "Dyze veluka vidstan abo velukui vantaz dla poloty na sy vidstan!\n";
		}
	}
	else if (M <= 1000 && M > 500) {
		P = 4 * Sab;
		if (P <= 300 && P > 0) {
			cout << "\nMinimalna kilkist paluva do pynkta B = " << P
				<< "\nDozapravutu paluva potribno " << 4 * Sbc << " chtobu doletitu do C\n";
		}
		else if (P == 0) {
			cout << "\nPolit ne mozluvui! Nemae paluva!\n";
		}
		else if (P < 0) {
			cout << "\nPolit ne mozluvui! Videmno zapravlenogo paluva ne isnue!\n";
		}
		else if (P > 300) {
			cout << "\nPolit ne mozluvui! Zapravlenogo baka ne vustachit!\n"
				<< "Dyze veluka vidstan abo velukui vantaz dla poloty na sy vidstan!\n";
		}
	}
	else if (M <= 1500 && M > 1000 ) {
		P = 7 * Sab;
		if (P <= 300 && P > 0) {
			cout << "\nMinimalna kilkist paluva do pynkta B = " << P
				<< "\nDozapravutu paluva potribno " << 7 * Sbc << " chtobu doletitu do C\n";
		}
		else if (P == 0) {
			cout << "\nPolit ne mozluvui! Nemae paluva!\n";
		}
		else if (P < 0) {
			cout << "\nPolit ne mozluvui! Videmno zapravlenogo paluva ne isnue!\n";
		}
		else if (P > 300) {
			cout << "\nPolit ne mozluvui! Zapravlenogo baka ne vustachit!\n"
				<< "Dyze veluka vidstan abo velukui vantaz dla poloty na sy vidstan!\n";
		}
	}
	else if (M <= 2000 && M > 1500) {
		P = 9 * Sab;
		if (P <= 300 && P > 0) {
			cout << "\nMinimalna kilkist paluva do pynkta B = " << P
				<< "\nDozapravutu paluva potribno " << 9 * Sbc << " chtobu doletitu do C\n";
		}
		else if (P == 0) {
			cout << "\nPolit ne mozluvui! Nemae paluva!\n";
		}
		else if (P < 0) {
			cout << "\nPolit ne mozluvui! Videmno zapravlenogo paluva ne isnue!\n";
		}
		else if (P > 300) {
			cout << "\nPolit ne mozluvui! Zapravlenogo baka ne vustachit!\n"
				<< "Dyze veluka vidstan abo velukui vantaz dla poloty na sy vidstan!\n";
		}
	}
	else if (M > 2000) {
		cout << "\nPolit ne mozluvui! Vantaz perevusye 2000 kg!\n";
	}
	else {
		cout << "\nPolit ne mozluvui! Videmnogo vantazy ne isnue!\n";
	}

}