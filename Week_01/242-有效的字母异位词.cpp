class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i])
                return false;
        }
        return true;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        int sch[26]={0};
        int tch[26]={0};
        for(int i=0;i<s.size();i++){
            sch[s[i]-'a']++;
            tch[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(sch[i]!=tch[i])
                return false;
        }
        return true;
    }
};