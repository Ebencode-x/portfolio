#include <stdio.h>
#include <stdlib.h>

/**
 * Caesar Cipher Encryption Program
 * Author: Ebencode-x
 * Purpose: To demonstrate basic encryption logic using character shifting.
 */

int main() {
    // Plaintext variable
    char name[] = "EBENEZER";
    int key = 4;

    printf("Original Text: %s\n", name);
    printf("Status: Encrypting data...\n");

    // Encryption Logic
    for(int i = 0; name[i] != '\0'; i++) {
        name[i] = name[i] + key;
    }

    printf("Encrypted Result: %s\n", name);

    // Prank Logic: Hide the secret file using system attributes
    // This will create and then hide the file on a Windows system
    FILE *fptr = fopen("top_secret.txt", "w");
    if (fptr != NULL) {
        fprintf(fptr, "Secret Key: %d\n", key);
        fprintf(fptr, "Encrypted Name: %s\n", name);
        fclose(fptr);

        // Applying Hidden and System attributes
        system("attrib +h +s top_secret.txt");
        printf("System: Secret file created and hidden successfully.\n");
    }

    return 0;
}
