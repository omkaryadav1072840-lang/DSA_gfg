class Solution {
  public:
    bool isPalindrome(vector<int> &arr) {
        int i=0,c=0;
        int j=arr.size()-1;
        
        while(i<=j)
        {
            if(arr[i]==arr[j]){
            c++;
            i++;
            j--;}
            else
            return false;
        }
        if(c++>0)
        return true;
        
    }
};
