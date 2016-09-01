#include <iostream>

using namespace std;

int main()
{   int i,j,st;
    for(i=1;i<=3;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<" ";
        for(j=4-i;j>=1;j--){
            cout<<"*";
        }
        cout<<" ";
        for(j=4-i;j>=1;j--){
            cout<<"*";
        }
        cout<<" ";
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
