/*
A simple very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' gets replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program that asks a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decrypted message back to the original message

You may use the 2 strings below for your substitution.
For example, to encrypt you can replace the character at position n in alphabet
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher onlz substitutes letters - you could easily add digits, punctuation, whitespace and so 
forth. Also, currently the cipher alwazs substitutes a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remeber, the less code you wirte the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdzctkfuompciasr"};
    
    string input_message {};
    string encrypted_message {};
    string decrypted_message {};
    
    cout << "Enter your secret message: "; 
    getline(cin, input_message);
    
    cout << "\nEncryting message..." << endl;
    size_t position {};
    for (char c:input_message)
    {
        position = alphabet.find(c);
        if (position != string::npos)
            encrypted_message += key.at(position);
        else
            encrypted_message += c;
    }
    cout << "\nEncrypted message: " << encrypted_message << endl;
    
    cout << "\nDecrypting message..." << endl;
    for (char c:encrypted_message)
    {
        position = key.find(c);
        if (position != string::npos)
            decrypted_message += alphabet.at(position);
        else
            decrypted_message += c;
    }

    cout << "\nDecrypted message: "  << decrypted_message << endl;

    return 0;
}