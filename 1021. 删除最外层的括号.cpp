#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;

class Solution {
public:
	string removeOuterParentheses(string S) {
		string str;
		int len = S.size();
		int t = 1;
		for (int i = 1; i < len; i++) {
			if (S[i] == '(') {
				t++;
			}
			else {
				t--;
			}
			if (t) {
				str.push_back(S[i]);
			}
			else {
				t = 1;
				i++;
			}
		}
		return str;
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
	cout << ans.removeOuterParentheses(str) << endl;
	getchar();
}
