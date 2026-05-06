#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    cout<<"Size of Array : "<<n <<endl;
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

bool Lsearch(int arr[], int size , int k){
    print(arr,size);
    // base case
    if(size == 0)
        return false;

    if(arr[0] == k){
        return true;
    }
    else{
        bool remainingPart = Lsearch(arr + 1 , size - 1, k);
        return remainingPart;
    }
}

int main(){
    int arr[5] = {3,2,5,1,6};
    int size = 5;
    int key = 6;

    bool ans = Lsearch(arr, size, key);
    if(ans){
        cout << "Target is found";
    }
    else{
        cout << "Target not found";
    }

    return 0;
}
