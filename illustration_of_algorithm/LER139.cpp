#include "./common.h"

class Solution {
public:
    vector<int> trainingPlan(vector<int>& actions) {
        // std::partition(actions.begin(), actions.end(), 
        //                     [](const int i) { return i %2 == 1; });
        // return actions;
        int i = 0, j = actions.size()-1;
        while (i < j)
        {
            // [2,4,6] 注意判断 i < j
            while ((i < j) && actions[i] % 2) i++;
            while ((i < j) && actions[j] % 2 == 0) j--;
            swap(actions[i], actions[j]);
        }
        return actions;
    }
};

