class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0)
            return false;
        if(s.size()==0)
            return true;
        stack<char> kh;
        kh.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                kh.push(s[i]);
            else{
                if(kh.empty())
                    return false;
                char t=kh.top();
                kh.pop();
                if(t=='(')
                    t=')';
                else if(t=='[')
                    t=']';
                else
                    t='}';
                if(s[i]!=t)
                    return false;
            }
        }
        if(!kh.empty())
            return false;
        return true;
    }
};