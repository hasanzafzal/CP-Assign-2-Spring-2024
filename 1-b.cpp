#include <iostream>
using namespace std;

int main(){
	int n, i, j;
	cout << "Enter a value = ";
	cin >> n;
	for (i = 0; i <= n; i++) {
		for (j = 10; j >= i; j--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}