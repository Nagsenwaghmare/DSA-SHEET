

// Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

// In one move, you can increment n - 1 elements of the array by 1.


#include <bits/stdc++.h>
using namespace std;


int minMoves(vector<int>& nums) {
      int minV = *min_element(begin(nums), end(nums));
        int move =  accumulate(begin(nums), end(nums), 0)-minV*nums.size();
        return move;
    }