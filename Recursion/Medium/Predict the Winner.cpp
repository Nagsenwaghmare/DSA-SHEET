#include <bits/stdc++.h>
using namespace std;


int predict_winner(vector<int>& nums,int i,int j){
        int max_score=0;
        if(i>j)return 0;
        if(i==j)return nums[i];
        else{
            max_score =  max(
                nums[i]+min(predict_winner(nums,i+1,j-1),predict_winner(nums,i+2,j)),
                nums[j]+min(predict_winner(nums,i,j-2),predict_winner(nums,i+1,j-1)));
        }
                return max_score;
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        int firstscore = predict_winner(nums,0,nums.size()-1);
        int tot_score = 0;
        for(auto i:nums){
            tot_score+=i;
        }
        return firstscore>=tot_score-firstscore;
    }


    //// using dp //memoisation

    int predict_winner(vector<int>& nums,int i,int j,vector<vector<int>>&memo){
        int max_score=0;
        if(i>j)return 0;
        if(i==j)return nums[i];
        if(memo[i][j]!=-1){
            return memo[i][j];
        }
        else{
            max_score =  max(
                nums[i]+min(predict_winner(nums,i+1,j-1,memo),predict_winner(nums,i+2,j,memo)),
                nums[j]+min(predict_winner(nums,i,j-2,memo),predict_winner(nums,i+1,j-1,memo)));
        }
                return max_score;
    }
    vector<vector<int>> buildmemo(int n){
        vector<vector<int>> k;
        for(int i=0;i<n;i++){
            vector<int>temp;
        for(int j=0;j<n;j++){
            temp.push_back(-1);
            }
            k.push_back(temp);
        }
        return k;
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> memo = buildmemo(n);
        int firstscore = predict_winner(nums,0,nums.size()-1,memo);
        int tot_score = 0;
        for(auto i:nums){
            tot_score+=i;
        }
        return firstscore>=tot_score-firstscore;
    }