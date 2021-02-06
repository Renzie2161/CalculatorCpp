#include <iostream>
#include <string>
using namespace std;

int main()
{
	main_menu:
system("cls");
system("color 1f"); //color
float a, b, hasil;
char aritmatika;
cout << "Welcome to C++ Calculator Program \n\n"; // Opening
cout << "First Number : "; // First Number (a)
cin >> a;
cout << "Insert (*, /, +, -) : "; // Operator
cin >> aritmatika;
cout << "Second Number : "; // Second Number (b)
cin >> b;

if (aritmatika == '+'){
	hasil = a + b;
} else if (aritmatika == '-'){
	hasil = a - b;
} else if (aritmatika == '*'){
	hasil = a * b;
} else if (aritmatika == '/'){
	hasil = a / b;
} else {
	cout << "Invalid Operator!"
	goto main_menu;
}

cout << "\n\n Calculate : " << a << aritmatika << b;
cout << "\n\n Total : " << hasil;

}