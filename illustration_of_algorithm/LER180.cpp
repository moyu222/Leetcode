#include "./common.h"

class Solution {
// public:
//     vector<vector<int>> fileCombination(int target) {
//         vector<vector<int>> res;
//         for (int i = 1; i <= target / 2; ++i)
//             combiantion(i, target, res);
//         return res;
//     }

// private:
//     void combiantion(int start, int target, vector<vector<int>> &res)
//     {
//         int sum = 0;
//         vector<int> comb;
//         while (sum < target)
//         {
//             sum += start;
//             comb.push_back(start);
//             start++;
//         }
//         if (sum == target)
//             res.push_back(comb);
//     }

public:
    vector<vector<int>> fileCombination(int target)
    {
        vector<vector<int>> res;
        int i = 1, j = 2;
        int sum = 3;
        vector<int> comb;
        while (i < j)
        {
            if (sum < target)
            {
                j++;
                sum += j;
            }
            else if (sum > target)
            {
                sum -= i;
                i++;
            }
            else if (sum == target)
            {
                for (int a = i; a <= j; ++a)
                {   
                    comb.push_back(a);
                }
                res.push_back(comb);
                comb.clear();
                sum -= i;
                i++;
            }
        }
        return res;
    }

public:
    vector<vector<int>> fileCombination(int target) {
        int i = 1;
        double j = 2.0;
        vector<vector<int>> res;
        while(i < j) {
            j = (-1 + sqrt(1 + 4 * (2 * target + (long) i * i - i))) / 2;
            if(i < j && j == (int)j) {
                vector<int> ans;
                for(int k = i; k <= (int)j; k++)
                    ans.push_back(k);
                res.push_back(ans);
            }
            i++;
        }
        return res;
    }

// 作者：Krahets
// 链接：https://leetcode.cn/leetbook/read/illustration-of-algorithm/lhlvcs/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

};