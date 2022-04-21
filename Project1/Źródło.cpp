#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <stdlib.h>
using namespace std;
int x;
char y;
class items
{
public:
	int quantity;
	string name;
	items(int y, string n)
	{
		this->quantity = y;
		this->name = n;
	}
	void increaseQuantity(int x)
	{
		this->quantity += x;
	}
	void minusQuantity(int x)
	{
		if (this->quantity - x < 0)
		{
			cout << "error\n";
			Sleep(2000);
		}
		else
		this->quantity = this->quantity - x;
	}
	void display()
	{
		cout << "We have a " << quantity << " " << name<< "\n";
	}
	~items()
	{
		cout << "goodbye\n";
	}
};
int main()
{
	cout << "how many rooms are there?\n";
	cin >> x;
	class items room(x, "rooms");
	cout << "Set amount of pasta\n";
	cin >> x;
	class items pasta(x, "pastas");
	cout << "Set amount of burgers\n";
	cin >> x;
	class items burger(x, "burgers");
	cout << "Set amount of pizza\n";
	cin >> x;
	class items pizza(x, "pizzas");
	Sleep(1500);
	system("cls");
	while (room.quantity != 0 || pizza.quantity != 0 || burger.quantity != 0 || pasta.quantity != 0)
	{
		cout << "Select one of this\n" << "1 display list of quantities\n2 buy quantities\n3 increase quantities\n";
		cin >> y;
		switch (y)
		{
		case '1':
		{
			room.display();
			pasta.display();
			burger.display();
			pizza.display();
			Sleep(2500);
			system("cls");
			break;
		}
		case '2':
		{
			cout << "How many rooms you want to buy?\n"; 
			cin >> x;
			room.minusQuantity(x);
			cout << "How many pasta you want to buy?\n";
			cin >> x;
			pasta.minusQuantity(x);
			cout << "How many burger you want to buy?\n";
			cin >> x;
			burger.minusQuantity(x);
			cout << "How many pizza you want to buy?\n";
			cin >> x;
			pizza.minusQuantity(x);
			break;
		}
		case '3':
		{
			cout << "how much room add?\n";
			cin >> x;
			room.increaseQuantity(x);
			cout << "how much pasta add?\n";
			cin >> x;
			pasta.increaseQuantity(x);
			cout << "how much burger add?\n";
			cin >> x;
			burger.increaseQuantity(x);
			cout << "how much pizza add?\n";
			cin  >>x;
			pizza.increaseQuantity(x);
			break;
		}
		}
	}
}