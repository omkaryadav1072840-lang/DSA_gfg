class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        int i,n=arr.size(),p=0;
        
        for(i=0;i<n;i++)
        {
            if(x>=arr[i])
            p++;
        }
        return p;
    }
};