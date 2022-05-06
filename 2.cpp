#include "2.h"

int sum(vector <int> a) {
	int s = 0;
	for (int i = 0; i < a.size(); i++) {
		s += a[i];
	}
	return s;
}

vector <int> invert(vector <int> a) {
	vector <int> b(a.size());

	for (int i = a.size() - 1; i >= 0; i--) {
		b[b.size() - i - 1] = a[i];
	}
	for (int i = 0; i < a.size(); i++) {
		a[i] = b[i];
	}

	return a;
}

vector <int> increase(vector <int> a) {
	return sort(a);
}
vector <int> decrease(vector <int> a) {
	return(invert(sort(a)));
}

void print(vector <int> a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
}

vector <int> sort(vector <int> a) {
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a.size() - 1; j++) {
			if (a[j] > a[j + 1]) {
				a[j + 1] = a[j] + a[j + 1];
				a[j] = a[j + 1] - a[j];
				a[j + 1] = a[j + 1] - a[j];
			}
		}
	}
	return a;
}