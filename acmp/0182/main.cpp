#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <bitset>
#include <cstdlib>
#define sqr(x) (x) * (x)    
#define F first
#define S second                      
#define pb push_back
#define sz(a) int((a).size())
#define mp make_pair
 
using namespace std;
 
const int MAXN = (int)3e4 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int a1, b1,
	a2, b2,
	a3, b3;
	
int A1, B1,
	A2, B2;

int ansx, ansy;

int main(){
	scanf ("%d%d%d%d%d%d", &a1, &b1, &a2, &b2, &a3, &b3);
	A1 = b2 - b1;
	B1 = a2 - a1;	
	B1 *= -1;
	
	A2 = b3 - b2;
	B2 = a3 - a2;
	B2 *= -1;

	if (A1*A2 + B1*B2 == 0) {
		if (a3 >= a2)
			ansx = a1 + a3 - a2;
		else
			ansx = a1 - (a3 - a2);
			
		if (b3 >= b2)
			ansy = b1 - (b3 - b2);
		else
			ansy = b1 + b3 - b2;	
	} else {
		A1 = b3 - b1;
		B1 = a3 - a1;
		B1 *= -1;
		
		A2 = b2 - b3;
		B2 = a2 - a3;
		B2 *= -1;
		
		if (a2 >= a3)
			ansx = a1 + a2 - a3;
		else
			ansx = a1 - a2 + a3;
			
		if (b2 >= b3)
			ansy = b1 - b2 + b3;
		else
			ansy = b1 + b2 - b3;
	}
	printf ("%d %d\n", ansx, ansy);
	return 0;
}

