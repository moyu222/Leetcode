#include "../common.h"
class Solution {
public:
    vector<int> spiralArray(vector<vector<int>>& array) {
        vector<int> res;
;
        int up = 0, down = array.size()-1;
        int left = 0, right = array[0].size()-1;
        // res.resize(array.size() * array[0].size());
        while (true)
        {
            // go right
            for (int i = left; i <= right; ++i)
            {
                res.push_back(array[up][i]);
            }
            up++;
            if (up > down) break;
            // go down
            for (int i = up; i <= down; ++i)
            {
                res.push_back(array[i][right]);
            }
            right--;
            if (left > right) break;
            // go left
            for (int i = right; i >= left; --i)
            {
                res.push_back(array[down][i]);
            }
            down--;
            if (up > down) break;
            // go up
            for (int i = down; i >= up; --i)
            {
                res.push_back(array[i][left]);
            }
            left++;
            if (left > right) break;
        }
        return res;
    }
};


class Solution {
public:
    vector<int> spiralArray(vector<vector<int>>& array)
    {
        if (array.empty()) return {};
        int l = 0, r = array[0].size() - 1, t = 0, b = array.size() - 1;
        vector<int> res;
        while(true)
        {
            for (int i = l; i <= r; i++) res.push_back(array[t][i]); // left to right
            if (++t > b) break;
            for (int i = t; i <= b; i++) res.push_back(array[i][r]); // top to bottom
            if (l > --r) break;
            for (int i = r; i >= l; i--) res.push_back(array[b][i]); // right to left
            if (t > --b) break;
            for (int i = b; i >= t; i--) res.push_back(array[i][l]); // bottom to top
            if (++l > r) break;
        }
        return res;
    }
};
