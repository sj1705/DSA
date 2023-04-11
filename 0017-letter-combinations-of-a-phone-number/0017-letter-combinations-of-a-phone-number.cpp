class Solution {
public:
      const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
vector<string> ans;
void fun(int i,string cstr,string str){
    if(i==str.size()){
        ans.push_back(cstr);
        return ;
    }

    for(auto it:pad[str[i]-'0']){
 
        
            string nstr=cstr+it;
            fun(i+1,nstr,str);
            nstr.pop_back();
        
    }
    return ;
}
    vector<string> letterCombinations(string str) {
 
      
            fun(0,"",str);
            if(str.size()==0) return {};
            return ans;

    }
};