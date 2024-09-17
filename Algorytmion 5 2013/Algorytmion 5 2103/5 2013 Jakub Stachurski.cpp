/*Za Wikipedi�: "Liczby zaprzyja�nione to para r�nych liczb naturalnych, takich,
�e suma dzielnik�w ka�dej z tych liczb r�wna si� drugiej (nie uwzgl�dniaj�c tych dw�ch
liczb jako dzielnik�w)." Np. liczba 284 ma dzielniki: 1, 2, 4, 71, 142, kt�rych suma daje
220, a liczba 220 ma dzielniki: 1, 2, 4, 5, 10,11, 20, 22, 44, 55, 110, kt�rych suma daje
284. Zatem liczby 220 i 284 tworz�, par� liczb zaprzyja�nionych. Nale�y napisa�
program, kt�ry dla dowolnej pary r�nych liczb naturalnych b�dzie rozstrzyga�, czy para
ta tworzy liczby zaprzyja�nione.*/

#include <iostream>

using namespace std;

//P�tle w obydwu funkcjach wyliczaj� wszystkie dzielniki podanych liczb do ich po�owy w��cznie. Nast�pnie dodaje je do sumy. 

int A(int liczbaA) {
	int sumaA = 0;
	for (int i = 1; i <= liczbaA / 2; i++) {
		if (liczbaA % i == 0) {
			sumaA += i;
		}
	}
	return sumaA;
}

int B(int liczbaB) {
	int sumaB = 0;
	for (int i = 1; i <= liczbaB / 2; i++) {
		if (liczbaB % i == 0) {
			sumaB += i;
		}
	}
	return sumaB;
}

//Sprawdzenie czy suma dzielnik�w pierwszej liczby jest r�wna liczbie drugiej i czy suma dzielnik�w drugiej jest r�wna liczbie pierwszej.
bool sprawdz(int sumaA, int sumaB, int liczbaA, int liczbaB) {
	if ((sumaA == liczbaB) && (sumaB == liczbaA)) return true;
	else if ((sumaA != liczbaB) && (sumaB != liczbaA)) return false;
}

int main() {
	int liczbaA, liczbaB, sumaA, sumaB;

	cout << "Podaj liczbe A: ";
	cin >> liczbaA;
	cout << "Podaj liczbe B: ";
	cin >> liczbaB;

	sumaA = A(liczbaA);
	sumaB = B(liczbaB);

	//Warunek, kt�ry sprawdza warto�� zwr�con� przez funkcj� boolowsk�.
	if (sprawdz(sumaA, sumaB, liczbaA, liczbaB) == 1) cout << "Podane liczby sa zaprzyjaznione" << endl;
	else if (sprawdz(sumaA, sumaB, liczbaA, liczbaB) == 0) cout << "Podane liczby nie sa zaprzyjaznione" << endl;

	system("pause");
}
