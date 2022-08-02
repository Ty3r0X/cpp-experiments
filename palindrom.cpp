#include <iostream>
using namespace std;

int main(){
	int inputnumber;
	cout << "Please insert number: ";
	cin >> inputnumber;
	int n,num,digit,rev=0;

	while(inputnumber != 0){
		digit = inputnumber % 10; 
		rev = (rev * 10) + digit;
		inputnumber = inputnumber / 10;
	}

	if(n == rev)
		cout <<"is palindrome" << endl;

	else
		cout <<"is not palindrome" << endl;

	return 0;

}
