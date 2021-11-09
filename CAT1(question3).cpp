//137339 Peter Chemelil
//CAT 1 questions 3
#include <iostream>
using namespace std;

int main()
{
	int salary, taxP, netS, result;
	string am;
	string amount;
	amount= "amount after tax deductions:";
	char ap;
	salary= 10000;
	taxP= salary*25/100;
	netS= salary-taxP;
	cout << "Enter 'T' to get tax payble or 'N' for net salary:\n";
	cin>> ap;
	if (ap=='T') result=taxP; 
	if (ap=='N') result=netS ;
	if (ap=='N') am=amount;
	cout << "\n"<<am;
	cout << "\n"<<result ;
	return 0;
}
