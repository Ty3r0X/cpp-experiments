#include <iostream>

using namespace std;

int main(){
	int n;
	cout << "Enter nr: ";
	cin >> n;
	for(int d = 1; d <= n; d++)
		if(n % d == 0)
			cout << d << " ";
	return 0;
}
