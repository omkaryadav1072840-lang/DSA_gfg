class Solution {
  public:
    int typeOfArr(vector<int>& arr) {
        int i,c=0,p=0,k=0,l=0,n=arr.size();
        for(i=1;i<n;i++)
        {
            if(arr[i-1]<arr[i])
            c++;
            else
            k++;
        }
        if (c == n - 1)
            return 1;
        if (k == n - 1)
            return 2;
        if (k==1)
            return 4;  
        if (c==1)
            return 3;  
          
        
    }
};