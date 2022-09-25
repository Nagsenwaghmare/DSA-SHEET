class Solution {
public:
vector<int> findIndices(vector<int>&arr, int K,
						int N)
{
	vector<int> pre(N);
        vector<int>suff(N);
	vector<int> ans;

	pre[0] = 1;
	for (int i = 1; i < N; i++) {
		if (arr[i] <= arr[i - 1])
			{
                pre[i] = pre[i - 1] + 1;
            }
		else
			{
                pre[i] = 1;
            }
	}

	suff[N - 1] = 1;
	for (int i = N - 2; i >= 0; i--) {
		if (arr[i] <= arr[i + 1])
			{
                suff[i] = suff[i + 1] + 1;
            }
		else
			{
                suff[i] = 1;
            }
	}

	for (int i = 1; i < N-1; i++) {
		if (pre[i-1] >= K && suff[i+1] >= K ){
            ans.push_back(i);
        }
			
	}

	return ans;
}



    vector<int> goodIndices(vector<int>& nums, int k) {
        
        vector<int>res = findIndices(nums,k,nums.size());
        return res;
    }
};