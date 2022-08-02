struct T{
    bool end=false;
    T* c[26];
    T(){
        end=false;
        memset(c, NULL, sizeof(c));
    }
};
class MagicDictionary {
public:
    
    T* root;
    MagicDictionary() {
        root = new T();
    }
    
    void buildDict(vector<string> dict) {
        int n=dict.size();
        for(int i=0;i<n;i++)
        {
            T* node=root;
            string word=dict[i];
            for(int j=0;j<word.size();j++)
            {
                if(!node->c[dict[i][j]-'a'])
                    node->c[dict[i][j]-'a']=new T();
                node=node->c[dict[i][j]-'a'];
            }
            node->end=true;
        }
    }
    
    bool helper(string word)
    {
        T* node=root;
        int n=word.size();
        for(int i=0;i<n;i++)
        {
            if(!node->c[word[i]-'a'])
                return false;
            node=node->c[word[i]-'a'];
        }
        return node->end;
    }
    
    bool search(string sword) {
        int n=sword.size();
        string word=sword;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<26;j++)
            {
                if('a'+j==sword[i])
                    continue;
                word[i]='a'+j;
                if(helper(word))
                    return true;
            }
            word[i]=sword[i];
        }
        return false;
    }
};