class Solution {
    vector<string> result;
public:
    vector<string> generateParenthesis(int n) {
        _generate(0,0,n,"");
        return result;
    }
    void _generate(int left, int right, int n, string s){
        //terminator
        if(left==n && right==n){
            result.push_back(s);
            return;
        }
        //process current logic:left,right

        //drill down
        if(left<n)
            _generate(left+1,right,n,s+"(");
        if(left>right)
            _generate(left,right+1,n,s+")");

        //reverse states
    }
};