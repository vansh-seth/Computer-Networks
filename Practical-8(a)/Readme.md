# Checksum Error Detection

## Overview
This C++ program implements a checksum error detection mechanism for binary data transmission. It allows the user to input a sent binary message, a received binary message, and a block size. The program then determines whether an error has occurred during transmission using the checksum method.

## Working of Checksum
Checksum is a method used to detect errors in transmitted data by performing binary addition of data blocks and appending the complement of the sum as a checksum. The receiver performs the same checksum operation, and if the result is a block of all 0s, it means no error occurred; otherwise, an error is detected.

### Steps:
1. **Padding**: If the length of the data is not a multiple of the block size, leading zeroes are added to make it so.
2. **Block-wise Addition**: The binary data is divided into blocks of the specified size and added using binary addition (ignoring overflow).
3. **Checksum Calculation**: The complement (bitwise flip) of the sum is taken as the checksum.
4. **Error Detection**:
   - The sender transmits the original data.
   - The receiver appends the sender's checksum to the received data and performs the checksum computation again.
   - If the final checksum result is all 0s, there is no error; otherwise, an error is detected.

## Example Calculation (Handwritten-Style)

Let's take an example where:
- **Data Sent**: `110101101011`
- **Block Size**: `4`

### Step 1: Divide the Data into Blocks
```
1101 0110 1011
```

### Step 2: Perform Binary Addition (Ignoring Carry Beyond Block Size)
```
  1101
+ 0110
-------
 10011  (Overflow, carry is ignored, keeping last 4 bits -> 0011)
+ 1011
-------
  1110
```

### Step 3: Compute Checksum (Complement of the Sum)
```
  1110  (Sum Result)
  ----
  0001  (Checksum - Flip bits)
```

### Step 4: Send Data with Checksum
```
Sent Data: 110101101011
Checksum:  0001
```

### Step 5: Receiver Side Verification
The receiver adds received data blocks (including checksum) and checks if the final sum is all `0`s. If not, an error is detected.

## Code Explanation
The main functions in the program are:

- **flip(string data):** Flips the bits (0 to 1 and vice versa).
- **getchecksum(string data, int blocksize):** Computes the checksum by adding data blocks and flipping the result.
- **haserror(string sent, string received, int blocksize):** Determines if an error occurred by reapplying the checksum method.

## Compilation & Execution
To compile and run the program:
```sh
 g++ checksum.cpp -o checksum
 ./checksum
```

## Sample Input & Output
### Input:
```
Enter sent message (binary): 110101
Enter received message (binary): 110101
Enter block size: 3
```
### Output:
```
No Error
```

### Input with Error:
```
Enter sent message (binary): 110101
Enter received message (binary): 110001
Enter block size: 3
```
### Output:
```
Error
```
