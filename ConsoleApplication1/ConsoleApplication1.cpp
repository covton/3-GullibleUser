// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	int x=0;
	int iter = 0;

	do  {
		++iter;
		cout << "Please enter any number not equal to " << iter << " .\n";
		cin >> x;
		if (x != iter) cout << "You were supposed to enter " << iter << ".\n" << "The number you entered was " << x << " .\n";
		if (iter > 9) cout << "You're more patient than I am...\n";
	} while ((x != iter) && (iter <= 9));

	if (x==iter) cout << "Thank you for entering " << x << " .\n";
	system("PAUSE");

    return 0;
}

