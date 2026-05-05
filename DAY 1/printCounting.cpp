#include<iostream>
using namespace std;

int print(int n )
{
    //base case
    if(n ==0){
        return 1;
    }
    
    cout<<n<<" ";
    //recursive case
    return print(n-1);
}


int main()
{
    int n;
    cin>>n;

    print(n);
    
}