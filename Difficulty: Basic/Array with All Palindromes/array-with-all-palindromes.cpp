class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        int i,n=arr.size(),p=0,q=0,r,sum=0,c=1;
        for(i=0;i<n;i++)
        {
            p=arr[i];
            q=p;
            while(p!=0)
            {
                r=p%10;
                p=p/10;
                sum=sum*10+r;
            }
            if(sum!=q)
            return false;
            sum=0;
        }
        return true;
        
    }
};