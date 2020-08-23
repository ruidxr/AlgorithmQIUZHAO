class Solution {
public:
    string reverseWords(string s) {
        istringstream win(s);
        string temp;
        string r = "";
        win>>temp;
        reverse(temp.begin(),temp.end());
        r += temp;
        while(win>>temp){
            reverse(temp.begin(),temp.end());
            r += " "+temp;
        }
        return r;
    }
};