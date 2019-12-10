#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	int subtractProductAndSum(int n) {
		int tmpe = 1, tmp = n;
		while (n > 0) {
			int e = n % 10;
			tmpe *= e;
			n /= 10;
		}
		while (tmp > 0) {
			int e = tmp % 10;
			tmpe -= e;
			tmp /= 10;
		}
		return tmpe;
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
	cin >> n;
	cout << ans.subtractProductAndSum(n) << endl;
	getchar();
}
