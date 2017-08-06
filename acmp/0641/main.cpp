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
  
typedef long long ll;
typedef vector<int> vi;                                                       
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
const int MAXN = (int)1e4 + 1;

string s, ans, cur;
 
void rec(int pos, int cnt){
    if (pos == int(s.length())){
        if (!cnt && (ans == "" || cur.length() > ans.length() || cur > ans))
            ans = cur;
        return;
    }
    if (cnt)
        rec(pos + 1, cnt - 1);
    if (cur != "" || s[pos] != '0')
        cur.pb(s[pos]);
    rec(pos + 1, cnt);
    if (cur != "" || s[pos] != '0')
        cur.pop_back();
}
 
int main(){
	cin >> s;
    rec(0, 2);
    cout << ans;
}
