#include<bits/stdc++.h>
using namespace std;


// using space complexity of 0(n)

int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int k=0;
        for(auto i:mp){
            if(i.second>=2){
                k+=2;
            }else if(i.second<2){
                k+=i.second;
            }
        }
        int j=0;
        for(auto i:mp){
            if(i.second>=2 && j<k){
                nums[j]=i.first;
                nums[j+1]=i.first;
                j+=2;
            }else if(i.second<2 && j<k){
                nums[j] = i.first;
                j++;
            }
        }
        cout<<k<<" ";
        return k;
    }


    // without using space complexity



    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(auto i:nums){
            if(j<2||i>nums[j-2]){
                nums[j++]=i;
            }
        }
        return j;
    }