#include <iostream>

using namespace std;

int main()
{   int i,n;
    cout << "Enter the size of the arrays" << endl;
    cin>>n;
    int a[n],b[n];
    float c[2*n];
    cout<<"enter the elements of first array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the elements of second array"<<endl;
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    int ia,ib,ic;
    for(ia=0,ib=0,ic=0;ia<=n&&ib<=n;){
        if(a[ia]>b[ib]){
            c[ic]=b[ib];
            ic++;
            ib++;
        }
        else if(a[ia]<b[ib]||ib==n){
            c[ic]=a[ia];
            ic++;
            ia++;
        }
        else{
            c[ic]=a[ia];
            ia++;ib++;
            ic+=2;
        }
        if(ib==n){
            b[ib]=1000000;
        }
        else if(ia==n){
            a[ia]=1000000;
        }
    }
    cout<<"median is : "<<(c[n]+c[n+1])/2<<endl;
    return 0;
}
