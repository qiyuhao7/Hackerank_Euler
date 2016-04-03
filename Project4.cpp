#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool palindromic(int n) {
	int num[6];
	num[0] = (n / 100000)%10;
	num[1] = (n / 10000) % 10;
	num[2] = (n / 1000) % 10;
	num[3] = (n / 100) % 10;
	num[4] = (n / 10) % 10;
	num[5] = n % 10;

	if ((num[0] == num[5]) && (num[1] == num[4]) && (num[2] == num[3])) {
		return 1;
	}
	else return 0;
}

bool have_factor(int n) {
	int s = 100;
	while (s <= 999) {
		if ((n%s == 0) && (n / s>100) && (n / s < 1000)) {
			return 1;
		}
		s++;
	}
	return 0;
}


int main() {
	int t;
	cin >> t;
	int a[100];
	int result[100];
	for (int i = 0; i < t; i++) {                          
		cin >> a[i];
		result[i] = 0;
	}
	for (int i = 0; i < t; i++) {
		int num= a[i];
		while (num >=101101) {
			if (palindromic(num) && have_factor(num)) {
				result[i] = num;
				break;
			}
			//cout << num << endl;
			num--;
		}
	}

	for (int i = 0; i < t; i++) {
		cout << result[i] << endl;
	}

    return 0;
}
