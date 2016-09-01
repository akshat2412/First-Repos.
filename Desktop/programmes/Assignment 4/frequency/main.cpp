#include <iostream>

using namespace std;

int main()
{   char ch;
    int Ar[127],i;
    for(i=32;i<127;i++){
        Ar[i]=0;
    }
    cin.get(ch);
    while(ch!='\n'){
        Ar[(int)ch]++;
        cin.get(ch);
    }
    for(i=32;i<127;i++){
        if(Ar[i]>0){
        cout<<(char)i<<" is "<<Ar[i]<<" times"<<endl;
        }
    }

    return 0;
}
