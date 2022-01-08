class Solution {
public:
    int minSubArrayLen(int x, vector<int>& arr) {
        int n=arr.size();
int res=INT_MAX,l=0,r=0,sum=0;

    for(r;r<n;r++)
    {
        //corner case
        if(arr[r]>=x)
            return 1;
        
        sum+=arr[r];
        if(sum>=x)
        {
            while(l<r && sum>=x)
            {
                sum-=arr[l];
                l++;
            }
            res=min(res,r-l+2);
        }
    }
    return res==INT_MAX?0:res;

        
    }
};
