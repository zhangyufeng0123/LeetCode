class Solution {
public:
	int game(vector<int> &guess, vector<int> &answer) {
		int ans = 0;
		int len1 = guess.size(), len2 = answer.size();
		for (int i = 0; i < min(len1, len2); i++) {
			if (guess[i] == answer[i]) {
				ans++;
			}
		}
		return ans;
	}
};