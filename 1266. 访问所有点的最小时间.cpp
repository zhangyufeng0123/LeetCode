#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

class Solution {
public:
	int minTimeToVisitAllPoints(vector<vector<int>>& points) {
		int ans = 0;
		int len = points.size();
		for (int i = 0; i < len - 1; i++) {
			ans += max(abs(points[i][0] - points[i + 1][0]), abs(points[i][1] - points[i + 1][1]));
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
	cin >> n;
	vector<vector<int>> points;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		vector<int> tmp;
		tmp.push_back(x);
		tmp.push_back(y);
		points.push_back(tmp);
	}
	cout << ans.minTimeToVisitAllPoints(points) << endl;
	getchar();
}
