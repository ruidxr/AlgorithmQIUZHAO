class Solution {
    vector<string> ans;
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)    return ans;
        map<char, string> mapPhone; 
        mapPhone.insert(pair<char, string>('2', "abc"));
        mapPhone.insert(pair<char, string>('3', "def"));
        mapPhone.insert(pair<char, string>('4', "ghi"));
        mapPhone.insert(pair<char, string>('5', "jkl"));
        mapPhone.insert(pair<char, string>('6', "mno"));
        mapPhone.insert(pair<char, string>('7', "pqrs"));
        mapPhone.insert(pair<char, string>('8', "tuv"));
        mapPhone.insert(pair<char, string>('9', "wxyz"));
        string temp;

        _generate(mapPhone,digits,temp,0);
        return ans;
    }
    void _generate(map<char,string> mapPhone, string digits, string temp, int index){
        if(index==digits.size()){
            ans.push_back(temp);
            return;
        }
        string letters=mapPhone[digits[index]];
        for(int i=0;i<letters.size();i++){
            _generate(mapPhone,digits,temp+letters[i],index+1);
        }
    }
};