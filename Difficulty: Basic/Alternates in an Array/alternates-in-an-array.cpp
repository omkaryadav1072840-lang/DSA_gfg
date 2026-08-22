class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
       int i,n=arr.size();
       int m=(n+1)/2,p=0;
      
       vector<int> baa(m);
       for(i=0;i<n;i+=2)
       {
           baa[p]=arr[i];
           p++;
       }
       return baa;
    }
};