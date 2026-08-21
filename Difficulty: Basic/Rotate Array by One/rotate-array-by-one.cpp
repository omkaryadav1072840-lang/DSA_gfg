class Solution {
  public:
    void rotate(vector<int> &arr) {
        int i,n=arr.size();
        int last=arr[n-1];
        for(i=n-1;i>0;i--)
        arr[i]=arr[i-1];
        arr[0]=last;
        
    }
};