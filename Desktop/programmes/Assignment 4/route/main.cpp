#include <iostream>

using namespace std;

int main()
{
    char ch,fi,se,th,fo;
    int ud,rl,i,E,N,S,W,uds,udn,rlw,rle;
    cin.get(ch);
    E=0;S=0;N=0;W=0;
    while(ch!='\n'){
        if(ch=='E'){
            E++;
        }
        if(ch=='S'){
            S++;
        }
        if(ch=='N'){
            N++;
        }
        if(ch=='W'){
            W++;
        }
        cin.get(ch);
    }
    if(N==S){
        ud=0;
        udn=0;uds=0;
    }
    else if(N>S){
        udn=N-S;
        uds=0;
    }
    else{
        uds=S-N;
        udn=0;
    }

    if(E==W){
        rl=0;
        rle=0;rlw=0;
    }
    else if(E>W){
        rle=E-W;
        rlw=0;
    }
    else{
        rlw=W-E;
        rle=0;
    }

    fi='E';se='N';th='S';fo='W';
    i=0;
    while(i<rle){
        cout<<fi;
        i++;
    }
    i=0;
     while(i<udn){
        cout<<se;
        i++;
    }
    i=0;
     while(i<uds){
        cout<<th;
        i++;
    }
    i=0;
     while(i<rlw){
        cout<<fo;
        i++;
    }

    return 0;
}
