#include <iostream>
#include <string>
using namespace std;

int main()
{
    string message;
    int key;

    cout << "Enter a message to encrypt: ";
    getline(cin, message);

    cout << "Enter the key: ";
    cin >> key;

    string encrypted_message = "";

    for (int i = 0; i < message.length(); i++) {

        // Encrypt uppercase letters 
        if (isupper(message[i]))
            encrypted_message += char(int(message[i] + key - 65) % 26 + 65);

        // Encrypt lowercase letters 
        else if (islower(message[i]))
            encrypted_message += char(int(message[i] + key - 97) % 26 + 97);

        else  // Do not encrypt symbols and numbers  
            encrypted_message += message[i];
    }

    cout << "Encrypted Message: " << encrypted_message << endl;
    
    return 0;
}