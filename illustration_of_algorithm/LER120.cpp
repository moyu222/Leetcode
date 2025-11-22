#include "./common.h"

class Solution {
public:
    // hashtable
    // int findRepeatDocument(vector<int>& documents) {
    //     unordered_set<int> iset;
    //     for (const int &num : documents)
    //     {
    //         if (iset.find(num) == iset.end())
    //             iset.insert(num);
    //         else
    //             return num;
    //     }
    //     return -1;
    // }

    // direct access array
    int findRepeatDocument(vector<int> &documents)
    {
       int sz = documents.size();
        std::vector<bool> daa(sz, false);   // 全部初始化为 false
        for (const int &id : documents)
        {
            if (!daa[id])
                daa[id] = true;
            else
                return id;
        }
        return -1;
    }

    // // direct access array in place
    // int findRepeatDocument(vector<int>& documents) {
    //     int i = 0;
    //     while (i < documents.size()) {
    //         if (documents[i] == i) {
    //             i++;
    //             continue;   // 如果当前位置的值等于索引，说明这个位置已经对齐，跳过
    //         }
    //         if (documents[documents[i]] == documents[i])
    //             return documents[i];   // 找到重复元素
    //         swap(documents[i], documents[documents[i]]); // 把当前元素放到它应该在的位置
    //     }
    //         return -1; // 没找到重复元素
    // }

};