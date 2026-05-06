#include<iostream>
using namespace std;

int sum(int arr[], int size){

    //base case
    if(size==0)
    return 0;

    int ans = arr[0] + sum(arr+1, size-1);
    return ans;
}

int main(){
    int arr[5] = {3,2,5,1,6};
    int size = 5;

    cout << sum(arr,size) << endl;


}