#include <bits/stdc++.h>
using namespace std;

int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>sequence,visited;
        visited.insert(beginWord);
        queue<string>q;
        q.push(beginWord);
        int res = 0;
        for(auto m:wordList){
            sequence.insert(m);
        }
        while(!q.empty()){
            int n = q.size();
            res++;
            for(int i=0;i<n;i++){
                string s = q.front();
                if(s==endWord)return res;
                q.pop();
                string t;
                for(int i=0;i<s.size();i++){
                    t=s;
                    for(int j='a';j<='z';j++){
                        t[i]=j;
                        if(visited.find(t)==visited.end() && sequence.find(t)!=sequence.end()){
                            visited.insert(t);
                            q.push(t);
                        }
                    }
                }
            }
        }
        return 0;
    }