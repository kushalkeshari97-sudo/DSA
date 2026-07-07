class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int j=0;j<nums1.size();j++){
        bool found=false;
        int nums1Value=nums1[j];
        int nums2Value;
        for(int i=0;i<nums2.size();i++){
            if(nums1Value==nums2[i]){
                nums2Value=i;
                break;
            }
        }
        for (int i=nums2Value+1;i<nums2.size();i++){
            if(nums2[nums2Value]<nums2[i]){
                ans.push_back(nums2[i]);
                found=true;
                break;
            }
        }
        if(!found){
          ans.push_back(-1);
        }
        }
        return ans;
    }
};