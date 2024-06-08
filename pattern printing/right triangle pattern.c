#include<stdio.h>
 int main(){
    int i,j,num;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++){
            printf("%d",j+1);      
        }
    }
    
    printf("/n");
 }

// *           |   1               A                                              
// * *         |   1 2         |   A B               
// * * *       |   1 2 3       |   A B C
// * * * *     |   1 2 3 4     |   A B C D          => for 
// * * * * *   |   1 2 3 4 5   |   A B C D
                                                            //   1
                                                            //   2 2
                                                            //   3 3 3            => printf("%d",i+1)
                                                            //   4 4 4 4
                                                            //   5 5 5 5 5

                                                            