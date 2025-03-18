# Error Detection Techniques

## Objective
Implementation of error detection techniques using Simple Parity Check and 2D Parity Check.

## Task Overview
- Study Simple Parity and 2-D Parity Check error detection techniques.
- Implement a program that:
  - Takes a message as input.
  - Detects errors in the message using:
    - Simple Parity Check
    - 2D Parity Check

## Features
- **Simple Parity Check**:
  - Computes the parity bit for a given message.
  - Simulates an error in the transmitted message.
  - Detects if an error is present.
- **2D Parity Check**:
  - Generates row and column parity bits.
  - Simulates an error in the transmitted data.
  - Detects and corrects single-bit errors.

## How to Run
1. Compile the program using g++:
   ```sh
   g++ error_detection.cpp -o error_detection
   ```
2. Run the executable:
   ```sh
   ./error_detection
   ```
3. Choose the error detection method:
   - Enter `1` for Simple Parity Check.
   - Enter `2` for 2D Parity Check.
4. Follow the prompts to input binary data.
5. Observe the output, including error detection and correction (for 2D Parity Check).

## Code Explanation
### Functions
- `calculateParity`: Computes parity for a given binary message.
- `simpleParityCheck`: Checks the validity of a received message using parity.
- `detectAndCorrect2DParity`: Detects and corrects single-bit errors using 2D parity.

### Main Execution Flow
1. The user selects an error detection method.
2. The program takes the binary message as input.
3. Parity bits are calculated and appended to the message.
4. A simulated error is introduced at a random position.
5. The program checks for errors and attempts correction (for 2D Parity Check).

## Example Input/Output
### Simple Parity Check
```
Enter binary message: 1101
Transmitted Message with Parity: 11011
Received Message (with simulated error at 2): 11111
Error detected!
```

### 2D Parity Check
```
Enter number of rows for 2D Parity Check: 3
Enter number of columns for 2D Parity Check: 3
Enter the binary data row-wise:
101
110
011
Transmitted Message with Parity:
1010
1101
0110
0001
Received Message (with simulated error at 1, 2):
1010
1111
0110
0001
Error found at position (1, 2)
Error corrected successfully.
```



