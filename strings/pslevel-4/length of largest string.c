#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    
    char *tok = strtok(str," ,.");
    char *word[100];
    int count =0;
    int result[100];
    int len =0;
    int max =0;
  
    while(tok != NULL){
        word[count++] = tok;
        result[len++] = strlen(tok);
        tok = strtok(NULL," ,.");
    }
     for(int i=0;i<len;i++){
         if(result[i] > max){
             max = result[i];
         }
     }
     
     printf("%d",max);
    
    
   
}

//using 2D ARRAY
#include<stdio.h>
#include<string.h>

int main() {
    int n;  // Number of words
    printf("Enter the number of words: ");
    scanf("%d", &n);
    
    char words[100][100];  // 2D array to store the words
    int max_length = 0;  // Variable to store the maximum word length
    int max_index = 0;  // Variable to store the index of the longest word
    
    printf("Enter the words:\n");
    
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);  // Input each word into the 2D array
        
        int length = strlen(words[i]);  // Get the length of the current word
        
        if (length > max_length) {
            max_length = length;  // Update max_length if the current word is longer
            max_index = i;  // Update max_index to the current word's index
        }
    }
    
    // Print the longest word
    printf("The longest word is: %s\n", words[max_index]);
    printf("Its length is: %d\n", max_length);
    
    return 0;
}
