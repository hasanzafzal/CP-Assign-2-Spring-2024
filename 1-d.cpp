#include <iostream>
using namespace std;

int main(){
	int n, i, j, k;
	cout << "Enter the value = ";
	cin >> n;
	for (i = 0; i < n; i++) {
		for (k = 0; k < n - i - 1; k++) {
			cout << " ";
		}
		for (j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}