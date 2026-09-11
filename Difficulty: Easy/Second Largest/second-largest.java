class Solution {
    public int getSecondLargest(int[] arr) {
        // code here
        int largest = -1;
        int SecondLargest = -1;
        for(int i =0; i<arr.length; i++){
            if(arr[i]>largest)
            largest = arr[i];
        }
        for(int i = 0; i<arr.length; i++){
            if(arr[i]>SecondLargest && arr[i]!=largest)
            SecondLargest = arr[i];
        }
         return SecondLargest;
    }
   
}