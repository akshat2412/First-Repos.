#include <iostream>

using namespace std;

int main()
{   int sa,sb,i,j;
    cout << "Enter the size of first array" << endl;
    cin>>sa;
    cout<<"Enter the elements of first array"<<endl;
    int A[sa];
    for(i=0;i<sa;i++){
        cin>>A[i];
    }
    cout<<"Enter the size of second array"<<endl;
    cin>>sb;
    cout<<"enter the elements of second array"<<endl;
    int B[sb];
    for(i=0;i<sb;i++){
        cin>>B[i];
    }
    for(i=0;i<sa-1;i++){
        int low=A[i];
        int index,state=0;
        for(int j=i+1;j<sa;j++){
            if(low>A[j]){
                low=A[j];
                index=j;
                state=1;
            }
        }
        if(state){
            int temp;
            temp=A[i];
            A[i]=low;
            A[index]=temp;
        }
    }

    for(i=0;i<sb-1;i++){
        int low=B[i];
        int index,state=0;
        for(int j=i+1;j<sb;j++){
            if(low>B[j]){
                low=B[j];
                index=j;
                state=1;
            }
        }
        if(state){
            int temp;
            temp=B[i];
            B[i]=low;
            B[index]=temp;
        }
    }
    int index=0;
    if(sa>sb){
        for(i=0;i<sb;i++){
            for(j=index;j<sa;j++){
                if(A[j]==B[i]){
                    cout<<B[i];
                    index=j;
                    break;
                }
            }
        }
    }
    else{
        index=0;
        for(i=0;i<sa;i++){
            for(j=index;j<sb;j++){
                if(A[i]==B[j]){
                    cout<<A[i];
                    index=j+1;
                    break;
                }
            }
        }
    }


    return 0;
}
