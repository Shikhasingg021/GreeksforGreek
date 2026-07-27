class Solution {
  public:
    bool isPerfectSquare(int n) {
        // code here
       int i = 0;
       while(i*i <=n){
           if(i*i == n)
           return true;
           i++;
           
       }
       return false;
        
    }
};