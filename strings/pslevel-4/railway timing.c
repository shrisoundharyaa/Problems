#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char time[9];
    int hr,sec,min;
    scanf("%8s",time);
    
    sscanf(time,"%d:%d:%d",&hr,&sec,&min);
    printf("%d  %d %d",hr,sec,min);
}
//anotheh method
#include <stdio.h>
#include <string.h>

int main() {
    char time[9]; // Assuming maximum length of input string is 8 characters ("HH:MM:SS" + '\0')
    int hours, minutes, seconds;

    // Input time string from user
    printf("Enter the time in HH:MM:SS format: ");
    scanf("%8s", time); // Read at most 8 characters to prevent buffer overflow

    // Parse hours, minutes, and seconds from the input string
    sscanf(time, "%d:%d:%d", &hours, &minutes, &seconds);

    // Print the time in the desired format
    printf("Hours: %d Minutes: %d Seconds: %d\n", hours, minutes, seconds);

    return 0;
}
//another
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char time[9];
    scanf("%8s",time);
    int hr,min,sec;
    if(sscanf(time,"%d:%d:%d",&hr,&min,&sec)== 3){
        if(hr>=0 && hr<= 23&&min >=0 &&  min <=59 && sec >=0 && sec <= 59){
            printf("its valid");
        }
        else{
            printf("it did not valid");
        }
        
    }
    else{
        printf("the time format is wrong");
    }
}
