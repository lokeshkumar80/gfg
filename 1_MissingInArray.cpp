#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int missingNumber(vector<int>& arr) {
        int n = arr.size();
        // bubbleSort(arr);
        sort(arr.begin(), arr.end());
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2 ;
        int ans = -1;
        while(s<=e){
            if(arr[mid]==mid+1){
                // move right
                s = mid + 1;
            }
            else{
                ans = mid;
                //move left
                e = mid - 1;
            }
            // update mid 
            mid = s + (e-s)/2 ;
        }
        
        // last element missing condition solution 
        if(ans+1 == 0){
            return n + 1;
        }
        int finalAns = ans+1;
        return finalAns;
    }

int main()
{
    vector<int>arr = {3, 4, 6, 8 , 1, 5, 3, 9};
    int finalAns = missingNumber(arr);
    cout<<finalAns;
     return 0;
}