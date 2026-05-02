class Solution {
public:
    char findTheDifference(string s, string t) {
        char uttar=0;
        for(auto pahili:s){
            uttar^=pahili;
        }
        for(auto dusri:t){
            uttar^=dusri;
        }
        return uttar;
    }
};