#include <iostream>

using namespace std;

int factorial(int n){
	int fact = 1;
	int i;
		for(i=1; i <= n; i++)
			fact *= i;
	cout << "Factorialul lui " << n << "este" << fact;
	return 0;
}

int main(){
	int n;
	cin >> n;
	factorial(n);
	return 0;
}
