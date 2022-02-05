#include <bits/stdc++.h>
using namespace std;

bool checkStraightLine(vector<vector<int>>& coordinates) {
        int cz = coordinates.size();
        if (cz == 1) 
        if (cz == 2) 
        
        int x0 = coordinates[0][0], y0 = coordinates[0][1];
        int dx = coordinates[1][0] - x0, dy = coordinates[1][1] - y0;
        
        for (int i = 1; i < cz; i++) {  
            int x = coordinates[i][0], y = coordinates[i][1];
            if (dx * (y - y0) != dy * (x - x0))  
			    return false;
        }
        return true;
    }