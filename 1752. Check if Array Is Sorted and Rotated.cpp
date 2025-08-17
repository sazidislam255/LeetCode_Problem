class Solution {
public:
    bool check(vector<int>& nums) {
        int pos=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                pos=i;
            }
        }
        if(is_sorted(nums.begin(),nums.end())){
            return true;
        }
        else{
            rotate(nums.begin(), nums.begin()+(pos+1), nums.end() );
            if(is_sorted(nums.begin(),nums.end())){
                return true;
           }
            else{
                return false;
            }
        }

    }
};
