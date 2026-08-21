class Solution {
  public:
    int largest(vector<int> &arr) {
        int i,n=arr.size(),sum=0;
        for(i=0;i<n;i++)
        {
            if(sum<arr[i])
            sum=arr[i];
        }
        return sum;
        
    }
};
