class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        d = d%arr.size();
        rotate(arr.begin(),arr.begin()+d,arr.end());
    }
};