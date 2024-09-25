//Write into a text file
#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *p;

    // Open a file in write mode ("w"). If the file doesn't exist it will be created
    p = fopen("output.txt", "w");

    // Check if the file was successfully opened
    if (p == NULL) {
        printf("The file doesn't exit");
        return 0;
    }

    // Write data to the file using fprintf()
    fprintf(p, "Hello, World!\n");
    fprintf(p, "This is a sample text written to the file.\n");

    // Close the file
    fclose(p);

    printf("Data written to the file successfully.\n");

    return 0;
}