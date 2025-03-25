#include <iostream>
#include <cmath>
using namespace std;

int calculateRedundantBits(int m) {
    int r = 0;
    while (pow(2, r) < (m + r + 1)) {
        r++;
    }
    return r;
}

void generateHammingCode(int data[], int m, int r, int hammingCode[]) {
    int j = 0, k = 0;
    int totalBits = m + r;
    for (int i = 0; i < totalBits; i++) {
        if ((i + 1) && (!(i & (i + 1)))) {
            hammingCode[i] = 0;
        } else {
            hammingCode[i] = data[j];
            j++;
        }
    }
    for (int i = 0; i < r; i++) {
        int pos = pow(2, i);
        int parity = 0;
        for (int j = pos - 1; j < totalBits; j += (2 * pos)) {
            for (int k = 0; k < pos; k++) {
                if ((j + k) < totalBits) {
                    parity ^= hammingCode[j + k];
                }
            }
        }
        hammingCode[pos - 1] = parity;
    }
}

int detectError(int hammingCode[], int totalBits) {
    int errorPos = 0;
   
    for (int i = 0; pow(2, i) < totalBits; i++) {
        int pos = pow(2, i);
        int parity = 0;
       
        for (int j = pos - 1; j < totalBits; j += (2 * pos)) {
            for (int k = 0; k < pos; k++) {
                if ((j + k) < totalBits) {
                    parity ^= hammingCode[j + k];
                }
            }
        }
       
        if (parity) {
            errorPos += pos;
        }
    }
   
    return errorPos;
}

int main() {
    int m;
    cout << "Enter the number of data bits: ";
    cin >> m;
   
    int data[m];
    cout << "Enter the data bits: ";
    for (int i = 0; i < m; i++) {
        cin >> data[i];
    }
   
    int r = calculateRedundantBits(m);
    int totalBits = m + r;
    int hammingCode[totalBits];
   
    generateHammingCode(data, m, r, hammingCode);
   
    cout << "Number of redundant bits required: " << r << endl;
    cout << "Hamming code: ";
    for (int i = 0; i < totalBits; i++) {
        cout << hammingCode[i] << " ";
    }
    cout << endl;
   
    int errorBit;
    cout << "Enter the bit position to flip (1-based index): ";
    cin >> errorBit;
   
    if (errorBit > 0 && errorBit <= totalBits) {
        hammingCode[errorBit - 1] ^= 1;
    }
   
    cout << "New Hamming code after flipping bit: ";
    for (int i = 0; i < totalBits; i++) {
        cout << hammingCode[i] << " ";
    }
    cout << endl;
   
    int errorPosition = detectError(hammingCode, totalBits);
   
    if (errorPosition == 0) {
        cout << "No error detected." << endl;
    } else {
        cout << "Error detected at bit position: " << errorPosition << endl;
        hammingCode[errorPosition - 1] ^= 1;
       
        cout << "Corrected Hamming code: ";
        for (int i = 0; i < totalBits; i++) {
            cout << hammingCode[i] << " ";
        }
        cout << endl;
    }
   
    return 0;
}
