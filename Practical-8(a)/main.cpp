#include <iostream>
using namespace std;

string flip(string data) {
    for (int i = 0; i < data.length(); i++) {
        data[i] = (data[i] == '0') ? '1' : '0';
    }
    return data;
}

string getchecksum(string data, int blocksize) {
    int n = data.length();
    if (n % blocksize != 0) {
        int padsize = blocksize - (n % blocksize);
        data = string(padsize, '0') + data;
    }
    string result = data.substr(0, blocksize);
    for (int i = blocksize; i < n; i += blocksize) {
        string block = data.substr(i, blocksize);
        string tempresult = "";
        int carry = 0;
        for (int j = blocksize - 1; j >= 0; j--) {
            int sum = (block[j] - '0') + (result[j] - '0') + carry;
            tempresult = char((sum % 2) + '0') + tempresult;
            carry = sum / 2;
        }
        result = tempresult;
    }
    return flip(result);
}

bool haserror(string sent, string received, int blocksize) {
    string senderchecksum = getchecksum(sent, blocksize);
    string receiverchecksum = getchecksum(received + senderchecksum, blocksize);
    int zerocount = 0;
    for (char c : receiverchecksum) {
        if (c == '0') {
            zerocount++;
        }
    }

    return zerocount != blocksize;
}

int main() {
    string sent, received;
    int blocksize;
    cout << "Enter sent message (binary): ";
    cin >> sent;
    cout << "Enter received message (binary): ";
    cin >> received;
    cout << "Enter block size: ";
    cin >> blocksize;
    if (!haserror(sent, received, blocksize)) {
        cout << "No Error" << endl;
    } else {
        cout << "Error" << endl;
    }
    return 0;
}

/*
Input:
Enter sent message (binary): 110101
Enter received message (binary): 110101
Enter block size: 3
Output:
No Error
*/
