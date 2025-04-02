#include <stdio.h>
#include <string.h>
#include <ctype.h>

char encryptedMessage[100]; 
void encrypt(char *message, char *key) {
    int i;
    for (i = 0; i < strlen(message); i++) {
        if (isalpha(message[i])) {
            char offset = islower(message[i]) ? 'a' : 'A';
            message[i] = key[message[i] - offset];
            if(islower(message[i]))
            {
                if(islower(key[message[i] - offset])){}
                else
                {
                    message[i] = tolower(key[message[i] - offset]);
                }
            }
            else
            {
                if(isupper(key[message[i] - offset])){}
                else
                {
                    message[i] = toupper(key[message[i] - offset]);
                }
            }
        }
    }
}

void decrypt(char *message, char *key) {
    int i;
    char reverseKey[26] = {0};
    for (i = 0; i < 26; i++) {
        reverseKey[key[i] - 'A'] = 'A' + i;
    }
    for (i = 0; i < strlen(message); i++) {
        if (isalpha(message[i])) {
            char offset = islower(message[i]) ? 'a' : 'A';
            char originalChar;
            char originalCaseOffset = islower(encryptedMessage[i]) ? 'a' : 'A';
            if(islower(encryptedMessage[i]))
            {
                originalChar = reverseKey[toupper(message[i]) - 'A'];
                message[i] = tolower(originalChar);
            }
            else
            {
                originalChar = reverseKey[message[i] - 'A'];
                message[i] = originalChar;
            }
        }
    }
}

int main() {
    char message[100], key[27], decryptedMessage[100];
    printf("Enter a 26-letter substitution key (no repeating letters): ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = 0;
    printf("Key Length: %zu\n", strlen(key));
    if (strlen(key) != 26) {
        printf("Invalid key length. It must be exactly 26 characters.\n");
        return 1; 
    }
    getchar();
    printf("Enter the message to encrypt: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = 0;
    strcpy(encryptedMessage, message);
    encrypt(message, key);
    printf("Encrypted Message: %s\n", message);
    strcpy(decryptedMessage, message); 
    decrypt(decryptedMessage, key);
    printf("Decrypted Message: %s\n", decryptedMessage);
    return 0;
}
