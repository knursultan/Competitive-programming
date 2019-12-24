#include <iostream>

using namespace std;



int main() {
	int n;
	cin >> n;
	int a[n + 5][n + 5];

	int left = 0;
	int down = 0;
	int right = 1;
	int up = 0;
	
	int i = 1;
	int j = 1;
	
	int x = 1;
	
	for (int q = 0; q < n + 5; q++) {
		for (int t = 0; t < n + 5; t++)
			a[q][t] = 0;
	}
	
	while (true) {
		a[i][j] = x++;
		if (right == 1) {
			if (a[i][j + 1] == 0 && j + 1 < n + 1) {
				j++;
			} else {
				i++;
				right = 0;
				down = 1;
				left = 0;
				up = 0;
			}
		} else if (down == 1) {
			if (a[i + 1][j] == 0 && i + 1 < n + 1) {
				i++;
			} else {
				j--;
				down = 0;			
				left = 1;
				up = 0;
				right = 0;
			}
		} else if (left == 1) {
			if (a[i][j - 1] == 0 && j - 1 > 0) {
				j--;
			} else {
				i--;
				left = 0;
				right = 0;
				up = 1;
				down = 0;
			}
		} else if (up == 1) {
			if (a[i - 1][j] == 0 && i - 1 > 0) {
				i--;
			} else {
				j++;
				right = 1;
				up = 0;
				down = 0;
				left = 0;
			}
		}
		//cout << "i " << i << " " << "j " << j << endl;
		if (x > n*n)
			break;
	}
	
	for (int q = 1; q <= n; q++) {
		for (int t = 1; t <= n; t++)
			printf("%d ", a[q][t]);
		printf("\n");
	}
	return 0;	
}
