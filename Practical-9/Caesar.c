#include <stdio.h>
#include <ctype.h>

int main() {
    char text[500], ch;
    int key;
    char option;
    printf("Do you want to encrypt or decrypt the message? (e/d): ");
    scanf(" %c", &option); 
    if (option != 'e' && option != 'd') {
        printf("Invalid option! Please enter 'e' for encrypt or 'd' for decrypt.\n");
        return 1;
    }
    printf("Enter a message: ");
    getchar(); 
    scanf("%[^\n]", text);  
    printf("Enter the key: ");
    scanf("%d", &key);
    for (int i = 0; text[i] != '\0'; ++i) {
        ch = text[i];
        if (isalnum(ch)) {
            if (islower(ch)) {
                if (option == 'e') {
                    ch = (ch - 'a' + key) % 26 + 'a';  
                } else {
                    ch = (ch - 'a' - key + 26) % 26 + 'a';  
                }
            } else if (isupper(ch)) {
                if (option == 'e') {
                    ch = (ch - 'A' + key) % 26 + 'A';  
                } else {
                    ch = (ch - 'A' - key + 26) % 26 + 'A';  
                }
            } else if (isdigit(ch)) {
                if (option == 'e') {
                    ch = (ch - '0' + key) % 10 + '0';  
                } else {
                    ch = (ch - '0' - key + 10) % 10 + '0'; 
                }
            }
        } else {
            printf("Invalid Message: non-alphanumeric character found.\n");
            return 1;  
        }
        text[i] = ch;
    }
    printf("%s message: %s\n", (option == 'e' ? "Encrypted" : "Decrypted"), text);
    return 0;
}
