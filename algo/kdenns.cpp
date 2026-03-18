#include<iostream>
#include<vector>
using namespace std;
int main(){
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int maxsum=nums[0];
        int currmaxsum=nums[0];
        int minsum= nums[0];
        int currminsum=nums[0];
        int total=nums[0];
        for(int i=0; i<n; i++){
            currmaxsum=max(currmaxsum+nums[i],nums[i]);
            maxsum=max(currmaxsum,maxsum);
            currminsum=min(currminsum+nums[i],nums[i]);
            minsum=min(currminsum,minsum);
        }
        
    }
};

}