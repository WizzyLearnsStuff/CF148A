#include<iostream>

using namespace std;
// Two methods
// One big brain, Euler algorithm, logarithmic time, uber fast
// two, Smart brain, notice constraint from 1 <= d <= 10^5
// Realise you have 3 * 10^9 Hz CPU, execution limit is 2 sec
// It will still be below 1ms under constraints

int main () {
	short int k[4];

	for (int i = 0; i < 4; i++) {
		cin >> k[i];
	}

	int n;
	cin >> n;
	int ret = 0;
	for (int i = 1; i <= n; i++) {
		ret += (i % k[0] == 0) || (i % k[1] == 0) || (i % k[2] == 0) || (i % k[3] == 0);
	}
	cout << ret;
	
}
