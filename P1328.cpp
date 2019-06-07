#include <iostream>
using namespace std;

int main() {
	int a[200] = {0};
	int b[200] = {0};
	
	int table[5][5] = {
		{0, 0, 1, 1, 0},
		{1, 0, 0, 1, 0},
		{0, 1, 0, 0, 1},
		{0, 0, 1, 0, 1},
		{1, 1, 0, 0, 0}
	};
	
	int N, Na, Nb;
	cin >> N >> Na >> Nb;
	for (int i = 0; i < Na; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < Nb; i++) {
		cin >> b[i];
	}
	
	int i_a = 0, i_b = 0;
	int score_a = 0, score_b = 0;
	while (N--) {
		score_a += table[a[i_a]][b[i_b]];
		score_b += table[b[i_b]][a[i_a]];
		
		i_a < Na-1 ? i_a++ : i_a = 0;
		i_b < Nb-1 ? i_b++ : i_b = 0;
	}
	
	cout << score_a << " " << score_b << endl;
	
	return 0;
}
