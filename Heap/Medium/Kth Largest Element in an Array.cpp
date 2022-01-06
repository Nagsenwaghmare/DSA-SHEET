#include <bits/stdc++.h>
using namespace std;



// in this question out main motive was to use the heap

// first we solved using brutefore method 
// that is we used the sorting first and then we directly returned the kth largest element



int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }









// here we have used the max heap where all the maximum elements are maintained at top so we will run the loop to
// remove the top k-1 elements and then the kth element will be the top element of the queue






int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq(nums.begin(),nums.end());
        for(int i=0;i<k-1;i++){
            cout<<pq.top()<<" ";
            pq.pop();
        }
        return pq.top();
    }