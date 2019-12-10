#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;

class Solution {
public:
	int balancedStringSplit(string s) {
		int ans = 0, len = s.length();
		int judge = 0;
		for (int i = 0; i < len; i++) {
			if (s[i] == 'L') {
				judge++;
			}
			else {
				judge--;
			}
			if (judge == 0) {
				ans++;
			}
		}
		return ans;
	}
};

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	Solution ans;
	int n;
	string str;
	//cin >> n;
	cin >> str;
	cout << ans.balancedStringSplit(str) << endl;
	getchar();
}
