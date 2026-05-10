class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ghya = prices[0];
        int vika = 0;
        for(int i=0;i<prices.size();i++){
            if(ghya > prices[i]){
            ghya = prices[i];
            }
        vika = max(vika, prices[i]-ghya);
        }
    return vika;
    }
};