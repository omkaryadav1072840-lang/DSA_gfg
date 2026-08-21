class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int min=0,max=0,i,n=arr.size();
        min=arr[0];
        for(i=0;i<n;i++)
        {
            if(min>arr[i])
            min=arr[i];
            else if(max<arr[i])
            max=arr[i];
        }
        return {min,max};
        
    }
};