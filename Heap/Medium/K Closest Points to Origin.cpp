
#include <bits/stdc++.h>
using namespace std;


// below is the code where we used nth element function which is used to order the element according to our priority
// hence here we have used the custom comparator which orders the vectors in lowest distance first manner


vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        nth_element(points.begin(),points.begin()+k,points.end(),[](vector<int>&p1,vector<int>&p2){
            return ((p1[0]*p1[0])+(p1[1]*p1[1]))<((p2[0]*p2[0])+(p2[1]*p2[1]));
        });
        return vector<vector<int>>(points.begin(),points.begin()+k);
    }

// here we gonna implement the use of priority queue 

struct cmp{
        bool operator()(vector<int>&p1,vector<int>&p2){
            return ((p1[0]*p1[0])+(p1[1]*p1[1]))>((p2[0]*p2[0])+(p2[1]*p2[1]));
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>res;
        priority_queue<vector<int>,vector<vector<int>>,cmp>pq;
        for(int i=0;i<points.size();i++){
            pq.push(points[i]);
        }
        while(!pq.empty() && k-->0){
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
    }