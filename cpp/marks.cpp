#include<bits/stdc++.h>
using namespace std;
int main(){
    int mark;
    cin>>mark;
    if(mark >=0 && mark<=100){
    if(mark>= 80 && mark <= 100){
        cout<<"A";
    }
    else if(mark>= 60 && mark <= 79){
        cout<<"B";
    }
    else if(mark>= 50 && mark <= 59){
        cout<<"C";
    }
    else if(mark>= 45 && mark <= 49){
        cout<<"D";
    }
    else if(mark>= 25 && mark <= 44){
        cout<<"E";
    }
    else{
        cout<<"F";
    }
    }
    else{
        cout<< "enter a valid number";
    }
}
