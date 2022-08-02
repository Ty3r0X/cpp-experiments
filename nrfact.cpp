#include <iostream>

using namespace std;

int factorial(int n){
	int fact = 1;
	int i;
		for(i=1; i <= n; i++)
			fact *= i;
	cout << "Factoril of " << n << "is" << fact;
	return 0;
}

int main(){
	int n;
	cin >> n;
	factorial(n);
	return 0;
}
