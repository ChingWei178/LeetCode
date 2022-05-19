bool cmp(const vector<int> &a, const vector<int> &b) {
    return a[1] < b[1];
}

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), cmp);
        int cnt = 1;
        int finish_time = points[0][1];
        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] > finish_time) {
                cnt++;
                finish_time = points[i][1];
            }
        }
        return cnt;
    }
};

// time complexity bounds at sorting => O(nlgn), space complexity = O(1)
// very similar to non-overlapping intervals