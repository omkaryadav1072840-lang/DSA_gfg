class Solution {
  public:
    int convertFive(int n) {
        int place =1;
        int r=0,sum=0;
        if(n==0)
        sum=5;
        while(n!=0)
        {
            r=n%10;
            n=n/10;
            if(r==0)
            r=5;
            
            sum=r*place+sum;
            place = place *10;

        }

         return sum;   
    }
};