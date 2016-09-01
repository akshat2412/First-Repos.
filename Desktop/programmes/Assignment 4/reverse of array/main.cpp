#include <iostream>

using namespace std;

int main()
{   int as;
    cout << "enter the size of array" << endl;
    cin>>as;
    cout<<"enter elements"<<endl;
    int A[as];
    int i=0;
    for(i=0;i<as;i++){
        cin>>A[i];
    }
    int j;
    for(i=0,j=as-1;j!=i&&j>i;j--,i++){
        int temp;
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;

    }
    for(i=0;i<as;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
