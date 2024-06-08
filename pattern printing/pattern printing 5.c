// 1
// 2*3       => output 
// 4*5*6

  #include<stdio.h>
  int main(){
    
      int i,j,rows;
    
      int num =1;
      
      scanf("%d",&rows);
      
        for(i=1;i<=rows;i++)
      {
          for(j=1;j<=i;j++){

              if(j==1){
                  printf("%d",num);}
            else {
            printf("*%d",num);
            }
              num++;
          }
          printf("\n");
      }
      return 0;
    
  }