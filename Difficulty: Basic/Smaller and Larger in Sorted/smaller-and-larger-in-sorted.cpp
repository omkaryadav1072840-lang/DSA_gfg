class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        int less=0,great=0,i,n=arr.size();
        for(i=0;i<n;i++)
        {
            if(target>=arr[i])
            less++;
            if(target<=arr[i])
            great++;
        }
        return{less,great};
    }
};