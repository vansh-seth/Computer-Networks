# Experiment 9: Implementation of Encryption Algorithm

## Objective
The goal of this experiment is to implement encryption algorithms that convert plain text into cipher text. The tasks performed include:
- Studying and implementing the classical Caesar cipher encryption technique.
- Creating and implementing a custom encryption and decryption algorithm using substitution cipher.

## Implementation Details
### 1. **Caesar Cipher Encryption and Decryption**
The first part of this experiment involves implementing the Caesar cipher, which shifts letters and digits by a given key value.

#### **Features:**
- Supports both encryption and decryption.
- Works with both uppercase and lowercase letters.
- Also encrypts numerical digits.
- Restricts non-alphanumeric characters.

#### **Usage:**
- The user selects either encryption ('e') or decryption ('d').
- A key (integer) is provided to shift characters.
- The program processes the input and returns the transformed text.

### 2. **Custom Substitution Cipher**
A custom substitution cipher is implemented where each letter of the alphabet is mapped to a different letter.

#### **Features:**
- Uses a user-defined 26-letter key.
- Enforces that the key contains all unique letters.
- Encrypts text by replacing letters with corresponding mapped characters.
- Decrypts text using the reverse of the encryption key.

#### **Usage:**
- The user provides a valid 26-character substitution key.
- The program encrypts the given message using the key.
- The program can then decrypt the message back to its original form.

## How to Run the Program
1. Compile the program using a C compiler:
   ```sh
   gcc encryption.c -o encryption
   ```
2. Run the executable:
   ```sh
   ./encryption
   ```
3. Follow the prompts to choose encryption or decryption, enter the key, and input the message.

## Example Execution
### **Caesar Cipher Example:**
**Input:**
```
Do you want to encrypt or decrypt the message? (e/d): e
Enter a message: Hello123
Enter the key: 3
```
**Output:**
```
Encrypted message: Khoor456
```

### **Substitution Cipher Example:**
**Input:**
```
Enter a 26-letter substitution key: QWERTYUIOPLKJHGFDSAZXCVBNM
Enter the message to encrypt: HELLO
```
**Output:**
```
Encrypted Message: ITSSG
Decrypted Message: HELLO
```

## Requirements
- A C compiler (GCC, Clang, etc.)
- Basic knowledge of C programming

## Conclusion
This experiment demonstrates how classical and custom encryption techniques can be implemented in C. The Caesar cipher provides a simple shift-based encryption, while the substitution cipher allows for more complex mappings.
