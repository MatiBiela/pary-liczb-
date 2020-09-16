#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int pierwsza = 0;
	int druga = 0;
	string a;
	int miejsce = 1;
	
	ifstream plik;
	plik.open("c:\\zadanko\\b.txt");
	if(plik.good())
	plik >> druga;
	while(!plik.eof())
	{
		pierwsza = druga;
		plik >> druga;
		if (pierwsza == druga)
		{
			cout << druga << ", ";
			cout << miejsce << ", ";
		}
		miejsce ++;
	}
	plik.close();
	
	
	return 0;
}
