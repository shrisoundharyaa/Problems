#include <stdio.h>
#include <stdlib.h>

/* Swaps strings by swapping pointers */
void swap1(char **str1_ptr, char **str2_ptr) 
{ 
    char *temp = *str1_ptr; 
    *str1_ptr = *str2_ptr; 
    *str2_ptr = temp; 
} 

int main() 
{ 
    // Allocate memory for the input strings
    char str1[100]; 
    char str2[100]; 

    // Get the first string from the user
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    // Remove the newline character if present
    str1[strcspn(str1, "\n")] = 0;

    // Get the second string from the user
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove the newline character if present
    str2[strcspn(str2, "\n")] = 0;

    // Print the original strings
    printf("Before swapping:\n");
    printf("str1 is %s\n", str1); 
    printf("str2 is %s\n", str2); 

    // Use pointers to the strings
    char *ptr1 = str1; 
    char *ptr2 = str2; 

    // Call the swap function
    swap1(&ptr1, &ptr2); 
    
    // Print the swapped strings
    printf("After swapping:\n");
    printf("str1 is %s\n", ptr1); 
    printf("str2 is %s\n", ptr2); 

    return 0; 
}


// if strings are stored using character arrays. 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Swaps strings by swapping data */
void swap2(char *str1, char *str2) 
{ 
    // Allocate memory for the temporary buffer
    char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char)); 
    
    // Check if memory allocation was successful
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit the program if memory allocation fails
    }
    
    // Copy str1 to temp
    strcpy(temp, str1); 
    
    // Copy str2 to str1
    strcpy(str1, str2); 
    
    // Copy temp (original str1) to str2
    strcpy(str2, temp); 
    
    // Free the allocated memory
    free(temp); 
} 

int main() 
{ 
    // Declare character arrays to store user input
    char str1[100]; 
    char str2[100]; 

    // Get the first string from the user
    printf("Enter first string: ");
    scanf("%99s", str1); // Limit input to 99 characters to prevent overflow

    // Get the second string from the user
    printf("Enter second string: ");
    scanf("%99s", str2); // Limit input to 99 characters to prevent overflow

    // Print the original strings
    printf("Before swapping:\n");
    printf("str1 is %s\n", str1); 
    printf("str2 is %s\n", str2); 

    // Call the swap function
    swap2(str1, str2); 
    
    // Print the swapped strings
    printf("After swapping:\n");
    printf("str1 is %s\n", str1); 
    printf("str2 is %s\n", str2); 

    return 0; 
} 
