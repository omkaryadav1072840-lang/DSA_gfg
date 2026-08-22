class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        int i,n=arr.size(),even=0,odd=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            even++;
            else
            odd++;
        }
        return {odd,even};
        
    }
};