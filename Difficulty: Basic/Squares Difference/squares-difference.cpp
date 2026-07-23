class Solution {
  public:
    int squaresDiff(int n) {
        // code here
        int sum = n*(n+1)/2;
        int squareofsum = sum *sum;
        int sumofsquare = n*(n+1)*(2*n+1)/6;
        return squareofsum - sumofsquare;
        
    }
};