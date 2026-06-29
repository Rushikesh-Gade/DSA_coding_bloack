class Solution {
public:
    char processStr(string s, long long k) {
       string result="";
        for(auto i:s){
            if(i=='*'){
                if(!result.empty()) result.pop_back();
            }else if(i=='%'){
            reverse(result.begin(),result.end());
            }
            else if(i=='#'){
             result+=result;
            }
            else {
             result.push_back(i);
            }   
        }
        if(result.empty()){
            result.push_back('.');
        }
        if(k>=result.size()){
            return '.';
        }
        return result[k];
    }
};