#include<iostream>
using namespace std;

void print(int n)
{
    // base case
    if(n == 0){
        return;
    }

    // recursive case
    print(n-1);   // पहले छोटे नंबर print होंगे
    cout << n << endl;  // फिर current नंबर print होगा
}

int main()
{
    int n;
    cin >> n;

    print(n);
}
