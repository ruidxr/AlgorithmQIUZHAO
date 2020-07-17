class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag=1,t;
        for(int i=digits.size()-1;i>=0;i--){
            t=(digits[i]+flag)%10;
            flag=(digits[i]+flag)/10;
            digits[i]=t;
            if(flag==0)
                return digits;
        }
        if(flag==1){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};