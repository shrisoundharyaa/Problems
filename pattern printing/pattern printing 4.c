#include<stdio.h>
int main(){
    int rows , start;
    scanf("%d\n%d",&rows,&start);
    int values;
       
    for( int i= 0; i< rows ; i++){
     values = start + i;
            
    
        for( int j=0 ; j<= i;j++)
        {
            printf("%d",values);
        }
     printf("\n");   
       

    }
       
}
// rows => 3
// start => 4
//  4                 => output and the question
//  5 5
//  6 6 6