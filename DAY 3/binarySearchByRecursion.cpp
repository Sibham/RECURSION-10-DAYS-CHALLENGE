#include<iostream>
using namespace std;

void print(int arr[], int s, int e){
    cout<<"Size of Array : "<<e-s+1 <<endl;
    for(int i = s; i<=e ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
bool binarySearch(int arr[], int s , int e, int key){

    print(arr,s,e);


    //base case Element not found
     if(s>e)
        return false;

    int mid = s + (e-s)/2;
    cout<<"Mid element : "<<arr[mid]<<endl;

    //Element found
    if(arr[mid] == key)
    return true;
    else if(arr[mid] < key){
        return binarySearch(arr, mid + 1, e, key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }




}

int main(){
    int arr[11] = {3,2,5,1,6,7,8,9,10,11,12};
    int size = 11;
    int key = 12;

    bool ans = binarySearch(arr, 0, size - 1, key);
    cout << "Element found : " << ans << endl;
}