/*Za Wikipedi¹: "Liczby zaprzyjaŸnione to para ró¿nych liczb naturalnych, takich,
¿e suma dzielników ka¿dej z tych liczb równa siê drugiej (nie uwzglêdniaj¹c tych dwóch
liczb jako dzielników)." Np. liczba 284 ma dzielniki: 1, 2, 4, 71, 142, których suma daje
220, a liczba 220 ma dzielniki: 1, 2, 4, 5, 10,11, 20, 22, 44, 55, 110, których suma daje
284. Zatem liczby 220 i 284 tworz¹, parê liczb zaprzyjaŸnionych. Nale¿y napisaæ
program, który dla dowolnej pary ró¿nych liczb naturalnych bêdzie rozstrzyga³, czy para
ta tworzy liczby zaprzyjaŸnione.*/

#include <iostream>

using namespace std;

//Pêtle w obydwu funkcjach wyliczaj¹ wszystkie dzielniki podanych liczb do ich po³owy w³¹cznie. Nastêpnie dodaje je do sumy. 

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

//Sprawdzenie czy suma dzielników pierwszej liczby jest równa liczbie drugiej i czy suma dzielników drugiej jest równa liczbie pierwszej.
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

	//Warunek, który sprawdza wartoœæ zwrócon¹ przez funkcjê boolowsk¹.
	if (sprawdz(sumaA, sumaB, liczbaA, liczbaB) == 1) cout << "Podane liczby sa zaprzyjaznione" << endl;
	else if (sprawdz(sumaA, sumaB, liczbaA, liczbaB) == 0) cout << "Podane liczby nie sa zaprzyjaznione" << endl;

	system("pause");
}
