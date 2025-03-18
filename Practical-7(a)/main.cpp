#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>
using namespace std;

char calculateParity(const string &message, bool evenParity) {
    int count = 0;
    for (char bit : message) {
        if (bit == '1') count++;
    }
    return (evenParity ? (count % 2 == 0 ? '0' : '1') : (count % 2 == 0 ? '1' : '0'));
}
bool simpleParityCheck(string message, bool evenParity) {
    char parityBit = message.back(); 
    message.pop_back();
    return (parityBit == calculateParity(message, evenParity));
}
void detectAndCorrect2DParity(vector<string> &data, bool evenParity) {
    int rows = data.size();
    int cols = data[0].size();
    vector<int> rowErrors, colErrors;
    for (int i = 0; i < rows - 1; i++) { 
        if (calculateParity(data[i].substr(0, cols - 1), evenParity) != data[i].back()) {
            rowErrors.push_back(i);
        }
    }
    for (int j = 0; j < cols - 1; j++) { 
        int count = 0;
        for (int i = 0; i < rows - 1; i++) { 
            if (data[i][j] == '1') count++;
        }
        char expectedParity = (evenParity ? (count % 2 == 0 ? '0' : '1') : (count % 2 == 0 ? '1' : '0'));
        if (expectedParity != data[rows - 1][j]) {
            colErrors.push_back(j);
        }
    }
    if (rowErrors.size() == 1 && colErrors.size() == 1) {
        int errorRow = rowErrors[0];
        int errorCol = colErrors[0];
        cout << "Error found at position (" << errorRow << ", " << errorCol << ")\n";
        data[errorRow][errorCol] = (data[errorRow][errorCol] == '0') ? '1' : '0';
        cout << "Error corrected successfully.\n";
    } else if (!rowErrors.empty() || !colErrors.empty()) {
        cout << "Multiple errors detected, unable to correct.\n";
    } else {
        cout << "No error detected.\n";
    }
    cout << "Corrected Message:\n";
    for (const auto &row : data) {
        cout << row << endl;
    }
}

int main() {
    srand(time(0));

    int choice;
    cout << "Choose Error Detection Method:\n";
    cout << "1. Simple Parity Check\n";
    cout << "2. 2D Parity Check\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        string message;
        cout << "Enter binary message: ";
        cin >> message;
        char parityBit = calculateParity(message, true);
        string transmittedMessage = message + parityBit;
        cout << "Transmitted Message with Parity: " << transmittedMessage << endl;
        int errorPos = rand() % transmittedMessage.size();
        transmittedMessage[errorPos] = (transmittedMessage[errorPos] == '0') ? '1' : '0';
        cout << "Received Message (with simulated error at " << errorPos << "): " << transmittedMessage << endl;
        if (simpleParityCheck(transmittedMessage, true)) {
            cout << "No error detected.\n";
        } else {
            cout << "Error detected!\n";
        }
    } else if (choice == 2) {
        int rows, cols;
        cout << "Enter number of rows for 2D Parity Check: ";
        cin >> rows;
        cout << "Enter number of columns for 2D Parity Check: ";
        cin >> cols;
        vector<string> data(rows);
        cout << "Enter the binary data row-wise:\n";
        for (int i = 0; i < rows; i++) {
            cin >> data[i];
        }
        vector<string> transmittedData = data;
        for (int i = 0; i < rows; i++) {
            transmittedData[i] += calculateParity(data[i], true);
        }
        string colParity = "";
        for (int j = 0; j < cols; j++) {
            int count = 0;
            for (int i = 0; i < rows; i++) {
                if (data[i][j] == '1') count++;
            }
            colParity += (count % 2 == 0) ? '0' : '1';
        }
        colParity += calculateParity(colParity, true);
        transmittedData.push_back(colParity);
        cout << "\nTransmitted Message with Parity:\n";
        for (const auto &row : transmittedData) {
            cout << row << endl;
        }
        int errorRow = rand() % rows;
        int errorCol = rand() % cols;
        transmittedData[errorRow][errorCol] = (transmittedData[errorRow][errorCol] == '0') ? '1' : '0';

        cout << "\nReceived Message (with simulated error at " << errorRow << ", " << errorCol << "):\n";
        for (const auto &row : transmittedData) {
            cout << row << endl;
        }
        detectAndCorrect2DParity(transmittedData, true);
    } else {
        cout << "Invalid choice. Please enter 1 or 2.\n";
    }

    return 0;
}
