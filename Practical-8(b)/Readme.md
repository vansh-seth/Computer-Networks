# CRC (Cyclic Redundancy Check) Implementation

## Overview
Cyclic Redundancy Check (CRC) is an error-detecting code commonly used in digital networks and storage devices to detect accidental changes to raw data. This project implements CRC encoding and decoding.

## Features
- Supports CRC-8, CRC-16, CRC-32 algorithms.
- Implements polynomial division for error checking.
- Can encode and verify transmitted data.
- Simple and efficient implementation.

## Installation
Clone this repository:
```bash
git clone https://github.com/your-username/crc-implementation.git
cd crc-implementation
```

## Usage
Run the script with sample input:
```bash
python crc.py --input "11010011101100" --poly "1101"
```

Example:
```bash
python crc.py --input "1011001" --poly "1101"
```
Output:
```
Original Data: 1011001
Polynomial: 1101
Encoded Data: 1011001110
```

## Code Structure
- `crc.py`: Main implementation of CRC encoding and decoding.
- `test_crc.py`: Unit tests for the CRC algorithm.

## Algorithms Supported
| CRC Type | Polynomial |
|----------|------------|
| CRC-8    | 0x07       |
| CRC-16   | 0x8005     |
| CRC-32   | 0x04C11DB7 |

## How It Works
1. The input binary data is divided by the generator polynomial using XOR operations.
2. The remainder (CRC code) is appended to the original data.
3. The receiver divides the received message by the same polynomial.
4. If the remainder is zero, the message is error-free.

## Testing
Run unit tests:
```bash
pytest test_crc.py
```

## License
This project is licensed under the MIT License.

## Author
[Your Name] - [Your Email]
