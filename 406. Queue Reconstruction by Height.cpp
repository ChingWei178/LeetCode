bool cmp(const vector<int> &a, const vector<int> &b) {
    if (a[0] > b[0])
        return true;
    else if (a[0] == b[0])
        return a[1] < b[1];
    else
        return false;
}

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), cmp);
        int height = people[0][0];
        for (int i = 1; i < people.size(); i++) {
            if (people[i][0] != height) {
                vector<int> temp = people[i];
                people.erase(people.begin() + i);
                people.insert(people.begin() + temp[1], temp);
            }
        }
        return people;
    }
};

// Runtime: 781 ms, faster than 5.01% of C++ online submissions for Queue Reconstruction by Height.
// Memory Usage: 12.7 MB, less than 27.32% of C++ online submissions for Queue Reconstruction by Height.


