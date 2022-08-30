class Solution {
public:
    bool findRotation(vector<vector<int>>& a, vector<vector<int>>& target) {
        if(a==target)return true;
        int n = a.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(a[i][j],a[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(a[i].begin(),a[i].end());
        }
        if(a==target)return true;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(a[i][j],a[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(a[i].begin(),a[i].end());
        }
        if(a==target)return true;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(a[i][j],a[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(a[i].begin(),a[i].end());
        }
        if(a==target)return true;
        return false;
    }
};