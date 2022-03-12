#include <bits/stdc++.h>
using namespace std;

void countSteps(int src, int dest){

    cout<< "Source is at "<<src<<" Destination is at "<<dest<<endl;
    if(src==dest){
        cout<<"Reached";
        return;
    }
    countSteps(src+1,dest);
    
}

int main(){

    int src=1;
    int dest=10;

    countSteps(src,dest);

return 0;
}