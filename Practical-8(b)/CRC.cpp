#include <iostream>
#include <string>

using namespace std;

// Function to perform XOR operation
string xorOperation(string dividend, string divisor) {
    for (size_t i = 0; i < divisor.length(); i++) {
        dividend[i] = (dividend[i] == divisor[i]) ? '0' : '1';
    }
    return dividend;
}

// Function to perform division (CRC computation)
string computeCRC(string data, string divisor) {
    int dataLen = data.length();
    int divisorLen = divisor.length();
    
    // Append zeros to the data based on the divisor length
    string paddedData = data + string(divisorLen - 1, '0');
    
    string remainder = paddedData.substr(0, divisorLen);
    
    for (size_t i = divisorLen; i <= paddedData.length(); i++) {
        if (remainder[0] == '1') {
            remainder = xorOperation(remainder, divisor);
        }
        remainder = remainder.substr(1); // Remove first bit
        if (i < paddedData.length()) {
            remainder += paddedData[i]; // Append next bit
        }
    }
    
    return remainder; // CRC remainder
}

// Function to check for errors at receiver
bool checkData(string receivedData, string divisor) {
    string remainder = computeCRC(receivedData, divisor);
    return remainder.find('1') == string::npos; // If remainder is all zeros, no error
}

int main() {
    string data, divisor;
    
    cout << "Enter the binary data: ";
    cin >> data;
    
    cout << "Enter the divisor (polynomial): ";
    cin >> divisor;
    
    string crc = computeCRC(data, divisor);
    
    cout << "CRC Remainder: " << crc << endl;
    
    string transmittedData = data + crc;
    cout << "Transmitted Data: " << transmittedData << endl;

    // Simulating error detection
    string receivedData;
    cout << "Enter the received data: ";
    cin >> receivedData;

    if (checkData(receivedData, divisor)) {
        cout << "No Error Detected in the Received Data" << endl;
    } else {
        cout << "Error Detected in the Received Data" << endl;
    }

    return 0;
}
