class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int count=0;
        for(int i=0;i<size-1;i++){
            if(nums[i]==0){
                count++;
            }
        }
        while(count--){
            for(int i=0;i<size-1;i++){
                if(nums[i]==0){
                swap(nums[i],nums[i+1]);
                }
            }
        }

    }
};
