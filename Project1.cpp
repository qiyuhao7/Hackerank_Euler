#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t;
	cin >> t;
	long a[100000];
	long long int sum[100000];
	for (int i = 0; i < t; i++) {
		cin >> a[i];
		sum[i] = 0;
	}

	for (int i = 0; i < t; i++) {
		long d3 = (a[i]-1)/ 3;
		long d5 = (a[i]-1) / 5;
		long d15 = (a[i]-1) / 15;

		sum[i] = sum[i] + 3 * d3 * (d3 + 1) / 2
			+ 5 * d5 * (d5 + 1) / 2
			- 15 * d15 * (d15 + 1) / 2;
	}

	for (int i = 0; i < t; i++) {
		cout << sum[i] << endl;
	}
    return 0;
}