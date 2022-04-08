class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    int l;
    KthLargest(int k, vector<int>& nums) {
        l=k;
        for(auto i:nums){
            pq.push(i);
        }
    }
    int add(int val) {
        pq.push(val);
        int m=l;
        while(pq.size()>m){
            pq.pop();
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */