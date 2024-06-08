#include<stdio.h>
int ispalindrome(int num){
    int temp = num;
    int original = num;
    int reverse = 0;
    while(temp>0){
        int rem = temp%10;
        reverse = (reverse *10) + rem;
        temp = temp/10;
        
    }
    return reverse==original;
}
int main(){
    int num;
    scanf("%d",&num);
    int count=0;
    while(count<5){
    if (ispalindrome(num)){
        printf("%d ",num);
        count++;
    }
    num++;
    }


    //another code
    #include<stdio.h>
int ispalindrome(int num){
    int temp = num;
    int original = num;
    int reverse = 0;
    while(temp>0){
        int rem = temp%10;
        reverse = (reverse *10) + rem;
        temp = temp/10;
        
    }
    return reverse==original;
}
int nextpalindrome(int num){
    int count =0;
    while(count<5){
        if(ispalindrome(num)){
            printf("%d ",num);
            count ++;
        }
       num++; 
    }
    
}
int main(){
    int num;
    scanf("%d",&num);
    int largest = nextpalindrome(num);
   
  
}
  