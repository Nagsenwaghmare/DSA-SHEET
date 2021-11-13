#include <bits/stdc++.h>
using namespace std;




double caldis(vector<int>&p1,vector<int>&p2){
        return sqrt(pow((p1[0]-p2[0]),2)+pow((p1[1]-p2[1]),2));
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> square = {p1,p2,p3,p4};
        set<double> dist;
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                double distance = caldis(square[i],square[j]);
                if(distance!=0)dist.insert(distance);
                else
                    return false;
            }
        }
        return dist.size()==2;
    }



//     Given the coordinates of four points in 2D space p1, p2, p3 and p4, return true if the four points construct a square.

// The coordinate of a point pi is represented as [xi, yi]. The input is not given in any order.

// A valid square has four equal sides with positive length and four equal angles (90-degree angles).