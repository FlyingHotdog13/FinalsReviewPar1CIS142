#include <iostream>
#include "FileCreator.h"

int main()
{
	string f;
	string product;
	int q;
	float price;
	float total;
	cout << "Enter File Name(.csv)==> ";
	cin >> f;
	FileCreator Karma(f);
	Karma.HeaderWrite();
	for (int r = 1; r <= 5; r++)
	{
		cout << "Enter name of Product " << r << " ==> ";
		cin >> product;
		cout << "Enter quantity of Product " << r << " ==> ";
		cin >> q;
		cout << "Enter price of Product " << r << " ==> ";
		cin >> price;
		cout << endl;
		total = q * price;
		Karma.FileWrite(f, q, price, total);
	}
	Karma.CloseFile();

}

