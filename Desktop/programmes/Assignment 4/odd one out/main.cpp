#include <iostream>

using namespace std;

int main()
{   int n,i,j;
    cout << "Enter the size of array" << endl;
    cin>>n;
    cout<<"enter the elements "<<endl;
    int A[n];
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    for(i=0;i<n;i+=2){
        for(j=i+1;j<n;j++){
            if(A[i]==A[j]){
                int temp=A[i+1];
                A[i+1]=A[j];
                A[j]=temp;
                break;
            }
        }
        if(j==n){
            cout<<A[i];
            break;
        }
    }

    return 0;
}
