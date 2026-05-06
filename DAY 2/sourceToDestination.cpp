#include<iostream>
using namespace std;

void reachHome(int source, int destination)
{
    cout << "Source : " << source << " Destination : " << destination << endl;
    
    // base case
    if(source == destination){
        return;
    }
    
    // processing - ek step aage badao
    source++;

    // recursive call
    reachHome(source, destination);
}

int main()
{
    int source = 0;
    int destination = 10;
    reachHome(source, destination);
}
