# Hamming Code Implementation

## Objective
Implementation of Hamming Code algorithm for error detection and correction.

## Task Overview
- Study the Hamming Code algorithm.
- Implement a program that:
  - Takes a message as input.
  - Generates the Hamming code for the message.
  - Simulates an error in transmission.
  - Detects and corrects errors at the receiver side.

## Features
- **Hamming Code Generation**:
  - Calculates the number of redundant bits required.
  - Generates the Hamming code by inserting parity bits.
- **Error Simulation**:
  - Allows the user to introduce an error by flipping a bit.
- **Error Detection & Correction**:
  - Identifies the erroneous bit position.
  - Corrects the bit and displays the corrected Hamming code.

## How to Run
1. Compile the program using g++:
   ```sh
   g++ hamming_code.cpp -o hamming_code
   ```
2. Run the executable:
   ```sh
   ./hamming_code
   ```
3. Enter the number of data bits and input the binary data.
4. Observe the generated Hamming code.
5. Introduce an error by selecting a bit position to flip.
6. Observe the error detection and correction process.

## Code Explanation
### Functions
- `calculateRedundantBits`: Computes the number of redundant bits needed.
- `generateHammingCode`: Generates the Hamming code with parity bits.
- `detectError`: Detects the position of an erroneous bit.

### Main Execution Flow
1. The user inputs the data bits.
2. The program calculates the required redundant bits.
3. It generates the Hamming code and displays it.
4. The user simulates an error by flipping a bit.
5. The program detects and corrects the error.
6. The corrected Hamming code is displayed.

## Example Input/Output
```
Enter the number of data bits: 4
Enter the data bits: 1 0 1 1
Number of redundant bits required: 3
Hamming code: 1 0 1 0 1 1 1 
Enter the bit position to flip (1-based index): 3
New Hamming code after flipping bit: 1 0 0 0 1 1 1 
Error detected at bit position: 3
Corrected Hamming code: 1 0 1 0 1 1 1 
```

## Author
- Developed by [Your Name]

## License
This project is open-source and available for educational purposes.
