#include <iostream>
#include <Windows.h>

using namespace std;


typedef struct Chandjomle {

	float a[5];
};


int scan() {

	auto daraje = 0;

	do
	{
		system("cls");
		system("color 7");
		cout << "\n\n\t\tdaraje chand jomle ra vared konid : ";
		cin >> daraje;
		system("cls");
		cout << "\n\n\n\t\t\tdar hal pardazesh .....";
		Sleep(1500);
		if (daraje > 5)
		{
			system("cls");
			system("color 4");
			cout << "\n\t\t\t\tmeghdar eshtebah vared kardi \n\n\t\t\t\tdobare vared kon   :)   \a";
			Sleep(3000);

		}

	} while (daraje > 5);

	system("cls");
	cout << "\n\n\t\t\tmeghdar ghabel ghabol\n\t\t\tdarhal vorod be marhale badi ......";
	Sleep(1500);

	return daraje;
}

Chandjomle scanf(int daraje, int b) {
	int a = b;

	Chandjomle pl;
	system("cls");
	cout << "\n\n\t\tzarayeb Chandjomle " << a << " ra vared konid : ";
	Sleep(1500);
	for (int i = 0; i < daraje; i++) {
		cout << "\n\tzareb[" << i + 1 << "] = ";
		cin >> pl.a[i];
	}
	return pl;
}

Chandjomle pluss(Chandjomle a, Chandjomle b, int size) {
	Chandjomle c;
	for (int i = 0; i < size; i++) {

		c.a[i] = a.a[i] + b.a[i];

	}

	return c;
}

Chandjomle difference(Chandjomle a, Chandjomle b, int size) {
	Chandjomle c;
	for (int i = 0; i < size; i++) {

		c.a[i] = a.a[i] - b.a[i];

	}

	return c;
}

int Comparison(Chandjomle a, Chandjomle b, int size) {

	for (int i = 0; i < size; i++) {

		if (a.a[i] != b.a[i]) {
			return 0;
		}

	}
	return 1;
}

int s() {
	int a;
	cout << "\n\n\t\tamal mored nazar ra entekhab konid :\n\t\t1.pluss\n\t\t2.difference\n\t\t3.Comparison";
	cout << "\n\t\tentekhab : ";
	cin >> a;
	return a;
}

void printf(int a) {

	switch (a)
	{
	case 1:
		system("color 4");
		system("cls");
		cout << "\n\n\t\tdo chand jomle ba ham barabr hastand";
		break;
	case 0:
		system("color 4");
		system("cls");
		cout << "\n\ndo chand jomle ba ham barabr nistand!";
		break;
	default:
		break;
	}
}

void printf(Chandjomle a, int daraje) {
	system("cls");
	cout << "\n\n\t\t javab : ";
	for (int i = 0; i < daraje; i++)
	{
		cout << a.a[i] << "(x^" << daraje - i << ") + ";
	}
}


int main() {
	Chandjomle p1, p2, p3;
	int a, b, c, s1 = 1, s2 = 2;


	auto daraje = scan();

	p1 = scanf(daraje, s1);
	p2 = scanf(daraje, s2);

	do
	{
		c = 1;
		a = s();
		switch (a)
		{
		case 1:
			system("cls");
			p3 = pluss(p1, p2, daraje);
			printf(p3, daraje);
			break;
		case 2:
			system("cls");
			p3 = difference(p1, p2, daraje);
			printf(p3, daraje);
			break;
		case 3:
			system("cls");
			b = Comparison(p1, p2, daraje);
			printf(b);
			break;
		default:
			c = 0;
			break;
		}

	} while (c != 1);

	return 0;
}
