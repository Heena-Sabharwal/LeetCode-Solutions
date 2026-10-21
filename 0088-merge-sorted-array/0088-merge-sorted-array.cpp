class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if(n==0)
            return;
        if(m==0){
            nums1=nums2;
            return;
        }
        
        int p1 = m - 1, p2 = n - 1, t = m + n - 1;

        while(t>=0){
            if(p1==-1){
                nums1[t]=nums2[p2];
                p2--;
            }
            else if(p2==-1){
                nums1[t]=nums1[p1];
                p1--;
            }
            else if(nums1[p1]>=nums2[p2]){
                nums1[t]=nums1[p1];
                p1--;
            }
            else{
                nums1[t]=nums2[p2];
                p2--;
            }
            t--;
        }
    }
};