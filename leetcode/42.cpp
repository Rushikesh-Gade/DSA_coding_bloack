#include<iostream>
#include<vector>
using namespace std;
    int trap(vector<int>& height) {
    int n = height.size();
    int left = 0 , right = n-1;
    int answer = 0;
    int rightmax = 0 , leftmax = 0;

    while (left < right){

        leftmax = max(leftmax , height[left]);
        rightmax = max(rightmax , height[right]);

        if(leftmax < rightmax){

            answer += leftmax - height[left];
            left++;
        }
        else{
            answer += rightmax - height[right];
            right--;
        }       
    }
    return answer;
}
int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height)<<endl;
    return 0;
}