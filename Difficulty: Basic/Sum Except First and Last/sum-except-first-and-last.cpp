class Solution {
  public:
    int sumExceptFirstLast(vector<int>& arr) {
        int i,sum=0;
        for(i=1;i<arr.size()-1;i++){
        sum=sum+arr[i];
        }
        return sum;
    }
    
};