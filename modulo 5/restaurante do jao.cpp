#include <iostream>

using namespace std;
void pagamentoo(int pizza1,int pessoas1)
{
	cout << "pagaram " << pizza1 / pessoas1 << "paus cada";
}
void main()
{
int pessoas, pizza, i, pagamento;

	cout << "quantas pessoas foram ao restaurante? e quanto custa a pizza? \n";
	cin >> pessoas >> pizza;
	pagamentoo(pizza,pessoas);
}
