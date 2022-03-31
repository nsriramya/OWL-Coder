class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int l=0;
        int h=a.size()-1;
        int m=0;
        while(l<=h)
        {
            m=l+(h-l)/2;
            if(a[m]<a[m+1])
            {
                l=m+1;
            }
            else  
            {
                h=m-1;
            }
             
        }
        return l;
        
    }
};
