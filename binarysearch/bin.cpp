#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums,int k){
    int start = 0;
    int end = nums.size()-1;
    
    while(start <= end){
        int mid = (start+end)/2;
        if(k>nums[mid]){
            start = mid+1;
        }
        else if(k<nums[mid]){
            end = mid-1;
        }
        else{
            return mid; }
            
    }return -1;

}
int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    binarysearch(nums,5);
}