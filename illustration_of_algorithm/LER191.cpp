#include <./common.h>

class Solution {
public:
    vector<int> statisticalResult(vector<int>& arrayA) {
        int sz = arrayA.size();
        vector<int> prefix(sz, 1);
        vector<int> suffix(sz, 1);
        int m = 1;
        for (int i = 1; i < sz; ++i)
        {
            m *= arrayA[i-1];
            prefix[i] = m;
        }
        m = 1;
        for (int i = sz - 2; i >= 0; --i)
        {
            m *= arrayA[i+1];
            suffix[i] = m;
        }

        vector<int> res;
        res.resize(sz);
        for (int i = 0; i < sz; ++i)
        {
            res[i] = prefix[i] * suffix[i];
        }
        return res;
    }
};