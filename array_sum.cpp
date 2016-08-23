#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int arr_i = 0;arr_i < n;arr_i++){
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    int sum = 0;
    /* Method 1 : Traditional For Loop*/
    //for(int i = 0 ; i < n ; i++)
    //    sum = sum + arr[i];

    /* Method 2 : Enhanced For Loop */
    //for(int ele : arr)
    //    sum = sum + ele;

    /*Method 3 : accumulate algorithm */
    sum = accumulate(arr.begin() , arr.end() , 0);

    cout << sum;
    return 0;
}
