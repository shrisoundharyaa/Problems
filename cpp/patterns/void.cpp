for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int k=0;k <2 *n - 2*i;k++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }

    //note it butterfly nad void are same 
    