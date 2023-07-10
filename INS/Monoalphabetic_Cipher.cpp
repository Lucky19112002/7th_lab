#include <iostream>
#include <map>

using namespace std;

void characterFrequency(const string& input) {
    map<char, int> frequencyMap;

    for (char ch : input) {
        frequencyMap[ch]++;
    }

    cout << "Frequency of each character: " << endl;
    for (const auto& pair : frequencyMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

string decryptMessage(const string& encrypted, const char keyran[]) {
    string decrypted = encrypted;
    int len = decrypted.length();

    for (int i = 0; i < len; i++) {
        char ch = decrypted[i];
        if (ch >= 'A' && ch <= 'Z') {
            int index = ch - 'A'; // to do alphabet 0 to 25
            decrypted[i] = keyran[index];
        }
    }

    cout << endl << "Decrypted message: " << decrypted << endl;
}
string encryptedMessage(const string& userinput, const char keyran[])
{   string encrypted = userinput;
    int len = encrypted.length();
    for (int i = 0; i < len; i++) {
        char ch = encrypted[i];
        if (ch >= 'A' && ch <= 'Z') {
            int index = ch - 'A'; // to do alphabet 0 to 25
            encrypted[i] = keyran[index];
        }
    }
    cout << endl << "Encrypted message: " << encrypted << endl;
    return encrypted;
}
int main() {
    string userinput,encryptedmessage;
    char plain[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char keyran[] = {'M', 'B', 'J', 'Y', 'A', 'L', 'Z', 'V', 'E', 'P', 'S', 'F', 'O', 'N', 'X', 'Q', 'G', 'D', 'U', 'R', 'I', 'T', 'W', 'K', 'C', 'H'};

    cout << "Enter the message: ";
    getline(cin, userinput); // Read the entire line including spaces

    characterFrequency(userinput);
    encryptedMessage(userinput, keyran);
    string encmsg=decryptMessage(userinput, plain);
    characterFrequency(encmsg);
    return 0;
}
