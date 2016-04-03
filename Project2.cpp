#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    	int t;
	cin >> t;
	long long a[100000];
	long long int sum[100000];
	long long int num[100000];
	for (int i = 0; i < t; i++) {
		cin >> a[i];
		sum[i] = 0;
	}
	num[0] = 1;
	num[1] = 2;
	for (int i = 0; i < t; i++) {
		int n = 2;
		while ( num[n-1] < a[i]) {
			num[n] = num[n - 1] + num[n - 2];
			//cout<< n << num[n]<<endl;
			n++;
		}
		for (int j = 0; j < n-1; j++) {
                //cout<< j << " "<<num[j]<<endl;
            if (num[j] % 2 == 0) {
				sum[i] += num[j];
            }
        }
	}
	for (int i = 0; i < t; i++) {
		cout << sum[i] << endl;
	}
	return 0;
    return 0;
}
