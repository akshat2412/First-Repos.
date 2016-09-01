#include <iostream>

using namespace std;

int main()
{   int a[10],i;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    int temp;
    for(i=0;i<=8;){
        if(a[i]>a[i+1]){

            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        int j;
        for(j=0;j<=8;){
            if(a[j]<a[j+1]){
                j++;
            }
            else{

                break;
            }
        }
        if(j==9){
            break;
        }
        if(i==8){
            i=0;
        }
        else{
            i++;
        }


    }
    for(i=0;i<10;i++){
        cout<<" "<<a[i];
    }
    return 0;
}
