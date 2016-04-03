#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t;
	cin >> t;
	long long int a[10];
	long long int result[10];
	for (int i = 0; i < t; i++) {
		cin >> a[i];
		result[i] = 0;
	}
	for (int i = 0; i < t; i++) {

		long long int  tmp = a[i];
		int j = 3;
		long long int largest = 2;
		while (tmp % 2 == 0)
			tmp = tmp / 2;
		while (j<=sqrt(tmp)) {
			while (tmp%j == 0) {
				largest = j;
				tmp = tmp / j;
			}
			j++;
		}
		if (tmp > largest) {
			largest = tmp;
		}
		result[i] =  largest;
	}

	for (int i = 0; i < t; i++) {
		cout << result[i] << endl;
	}

    return 0;
}