bool cmp(const vector<int>&a, const vector<int>&b) {
    return a[1] < b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        int finish_time = intervals[0][1];
        int count = 0;
        for (auto iter = intervals.begin() + 1; iter != intervals.end(); iter++) {
            if ((*iter)[0] < finish_time) {
                count++;
                continue;
            }
            else 
                finish_time = (*iter)[1];
        } 
        return count;
    }
};

// time complexity bounds at sorting => O(nlgn), space complexity = O(1)