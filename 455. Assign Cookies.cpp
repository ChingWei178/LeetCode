class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int cnt = 0;
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (j == g.size()) break;
            if (s[i] >= g[j]) {
                cnt++;
                j++;
            } else {
                
            }
        }
        return cnt;
    }
};

// time complexity bounds at sorting = O(nlgn), space complexity = O(1)