#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
          cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n - 1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
        
   
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < 2 * n - 1; i++) {
        int stars;
        if(i < n) 
            stars = i + 1; // Ascending part
        else 
            stars = 2 * n - i - 1; // Descending part
            
        for(int j = 0; j < stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<= 2 *n - 1;i++){
        int  stars = i;
        
        if (i>n) stars = 2 * n - i;
        for(int j=1;j<=stars;j++){
          cout<<"*";
        }
        cout<<endl;
    }
    
        
   
}