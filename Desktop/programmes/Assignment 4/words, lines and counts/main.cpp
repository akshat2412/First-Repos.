#include <iostream>b

using namespace std;

int main()
{   int line,charac,word;
    char curr,pr;
    line=1;charac=0;word=0;
    cin.get(curr);
    while(curr!='$'){
            if(curr=='\n'){
                line++;
                cin.get(curr);
                continue;
            }
            if(curr=='$'){
                break;
            }
            if(curr!=' '&&curr!='\n'){
                charac++;
            }
            pr=curr;
            cin.get(curr);
            if(curr=='$'){
                break;
            }
            if((curr!=' '&&curr!='\n')&&pr!=' '){
                word++;
                charac++;
                while(curr!=' '&&curr!='\n'){
                    cin.get(curr);
                    if(curr=='$'){
                        break;
                    }
                    if(curr!=' '&&curr!='\n'){
                    charac++;
                    }
                }
            }
            if(curr==' '){
                while(curr!=' '){
                    cin.get(curr);
                    if(curr=='\n'){
                        line++;
                        cin.get(curr);
                    }
                }
            }
    }
    cout<<"lines :"<<line<<endl;
    cout<<"words :"<<word<<endl;
    cout<<"characters :"<<charac<<endl;
    return 0;
}
