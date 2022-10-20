class Solution {
public:
    string intToRoman(int num) {
        string s = "";
        vector<string>str = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int>rom={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        cout<<rom[0]<<" ";
        for(int i=0;num!=0;i++){
            
            while(num>=rom[i]){
                num-=rom[i];
                cout<<num<<" ";
                s+=str[i];
            }
        }
        return s;
    }
};