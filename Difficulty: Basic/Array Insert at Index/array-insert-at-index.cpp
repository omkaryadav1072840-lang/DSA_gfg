class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        int i,j,n=arr.size();
        arr.push_back(0);
        for(i=n-1;i>=index;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=val;

        
    }
};
