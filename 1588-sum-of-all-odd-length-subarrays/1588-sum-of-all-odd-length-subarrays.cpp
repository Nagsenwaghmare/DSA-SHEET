class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int tot=0;
        for(int i=0;i<n;i++){
            int sum=arr[i];
            tot+=sum;
            for(int j=i+1;j<n;j++){
                cout<<arr[j]<<" ";
                sum+=arr[j];
                if((j-i+1)%2==1 &&(j-i+1)!=1)tot+=sum;
            }
            cout<<"\n";
        }
        return tot;
    }
};