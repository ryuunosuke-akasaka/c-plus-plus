
#include <iostream>
#include<string>
using namespace std;

int main(){
    int T,i;cin>>T;    //4
    if(T>0&&T<101){
    string line;
    string sen[T];   //0-3
    for(i=0;i<T;i++){
        cin>>line;
        sen[i] = line;  //0 sad 1 this 2 sadasdasd 3 asdasdasdasdsdsada
    }
    
    i=0;
    while(T--){
        string temp = sen[i];   //2  1  0
        int n = temp.length();      
        
        if(n>101){
            return 0;
        }
        else if (n>10)
        {
            char a = temp[0];
            char b = temp[n-1];
            cout<<a<<n-2<<b<<endl;
        }
        else{
            cout<<temp<<endl;
        }
        i++;
    }
    }
    return 0;

}

 
