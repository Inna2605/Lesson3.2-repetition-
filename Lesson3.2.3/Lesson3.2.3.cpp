/* ористувач вводить дв≥ дати (день, м≥с€ць, р≥к у вигл€д≥ ц≥лих чисел). 
Ќеобх≥дно визначити ≥ вивести к≥льк≥сть дн≥в м≥ж цими двома датами. 
ƒл€ розрахунк≥в враховувати високосн≥ роки, а також коректне число дн≥в у м≥с€ц€х 
(березень Ч 31, вересень Ч 30, лютий невисокосного року Ч 28 ≥ т.д.).*/

#include<iostream>
using namespace std;
int main() {
	
	//enum V {January = 1, February, March, April, May, June, Jule, August, September, October, November, December};

	//1January = 31, 2February = 28, 3March = 31, 4April = 30, 5May = 31, 6June = 30, 7Jule = 31, 8August = 31,
	//	9September = 30, 10October = 31, 11November = 30, 12December = 31
	
	int D1, D2, M1, M2, H1, H2, VHD = 0, VHD1 = 0, VHD2 = 0, HD1 = 0, HD2 = 0, MD1 = 0, MD2 = 0, MD = 0, MD1f = 0,MD2f = 0, REZ = 0;

	cout << "Vvedite persy daty (den misatc rik): ";
	cin >> D1 >> M1 >> H1;
	cout << "Vvedite drygy daty (den misatc rik): ";
	cin >> D2 >> M2 >> H2;
	if ((H1 % 4 != 0 && H1 % 100 != 0) || (H1 % 4 == 0 && H1 % 100 == 0 && H1 % 400 != 0)) {
		MD1f = 28;
		VHD1 = 365;
	}
	else{
		MD1f = 29;
		VHD1 = 366;
	}

	if ((H2 % 4 != 0 && H2 % 100 != 0) || (H2 % 4 == 0 && H2 % 100 == 0 && H2 % 400 != 0)) {
		MD2f = 28;
		VHD2 = 365;
	}
	else {
		MD2f = 29;
		VHD2 = 366;
	}

	if (M1 == 1) {
		MD1 = D1;
	}
	else if (M1 == 2) {
		MD1 = 31 + D1;
	}
	else if (M1 == 3) {
		MD1 = (31 + MD1f) + D1;
	}
	else if (M1 == 4) {
		MD1 = (31 + MD1f + 31) + D1;
	}
	else if (M1 == 5) {
		MD1 = (31 + MD1f + 31 + 30) + D1;
	}
	else if (M1 == 6) {
		MD1 = (31 + MD1f + 31 + 30 + 31) + D1;
	}
	else if (M1 == 7) {
		MD1 = (31 + MD1f + 31 + 30 + 31 + 30) + D1;
	}
	else if (M1 == 8) {
		MD1 = (31 + MD1f + 31 + 30 + 31 + 30 + 31) + D1;
	}
	else if (M1 == 9) {
		MD1 = (31 + MD1f + 31 + 30 + 31 + 30 + 31 + 31) + D1;
	}
	else if (M1 == 10) {
		MD1 = (31 + MD1f + 31 + 30 + 31 + 30 + 31 + 31 + 30) + D1;
	}
	else if (M1 == 11) {
		MD1 = (31 + MD1f + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) + D1;
	}
	else if (M1 == 12) {
		MD1 = (31 + MD1f + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) + D1;
	}

	if (M2 == 1) {
		MD2 = D2;
	}
	else if (M2 == 2) {
		MD2 = 31 + D1;
	}
	else if (M2 == 4) {
		MD2 = (31 + MD2f + 31) + D2;
	}
	else if (M2 == 5) {
		MD2 = (31 + MD2f + 31 + 30) + D2;
	}
	else if (M2 == 6) {
		MD2 = (31 + MD2f + 31 + 30 + 31) + D2;
	}
	else if (M2 == 7) {
		MD2 = (31 + MD2f + 31 + 30 + 31 + 30) + D2;
	}
	else if (M2 == 8) {
		MD2 = (31 + MD2f + 31 + 30 + 31 + 30 + 31) + D2;
	}
	else if (M2 == 9) {
		MD2 = (31 + MD2f + 31 + 30 + 31 + 30 + 31 + 31) + D2;
	}
	else if (M2 == 10) {
		MD2 = (31 + MD2f + 31 + 30 + 31 + 30 + 31 + 31 + 30) + D2;
	}
	else if (M2 == 11) {
		MD2 = (31 + MD2f + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) + D2;
	}
	else if (M2 == 12) {
		MD2 = (31 + MD2f + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) + D2;
	}
	
	if (MD1 >= MD2) {
		MD = MD1 - MD2;
	}
	else if (MD1 < MD2) {
		MD = MD2 - MD1;
	}
	
	if (H1 > H2) {
		REZ = (((H1 - H2)* 365) + ((VHD2 - MD2) - (VHD1 - MD1)));
	}
	else if (H1 < H2) {
		REZ = (((H2 - H1)* 365) + ((VHD1 - MD1) - (VHD2 - MD2)));
	}
	else {
		REZ = MD;
	}	

cout << "Kilkist dniv " << REZ << endl;
}