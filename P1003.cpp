#include <iostream>
using namespace std;

struct Sqr {
	int x_min;
	int y_min;
	int x_max;
	int y_max;
};

int main() {
	struct Sqr sqrs[10005];
	int n;
	cin >> n;
	
	int xl, yl;
	for (int i = 0; i < n; i++) {
		cin >> sqrs[i].x_min;
		cin >> sqrs[i].y_min;
		cin >> xl >> yl;
		sqrs[i].x_max = sqrs[i].x_min + xl;
		sqrs[i].y_max = sqrs[i].y_min + yl;
	}
	
	int px, py;
	cin >> px >> py;
	
	int point = -2;
	for (int i = 0; i < n; i++) {
		if (px >= sqrs[i].x_min && px <= sqrs[i].x_max && py >= sqrs[i].y_min && py <= sqrs[i].y_max) {
			point = i;
		}
	}
	
	cout << point + 1 << endl;
	
	return 0;
}
