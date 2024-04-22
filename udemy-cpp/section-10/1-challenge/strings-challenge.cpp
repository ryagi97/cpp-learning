#include <iostream>
#include <string>


int main()
{

    std::string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string key      {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

    std::string inputMessage;
    std::string outputMessage;

    std::string userChoice;
    bool encryptMessage {true};

    std::cout << "1: Encrypt a plain text message\n";
    std::cout << "2: Decrypt an encrypted message\n";
    std::cout << "Please enter your choice: ";

    std::getline(std::cin, userChoice, '\n');

    if (userChoice == "1") {
        encryptMessage = true;
    } else if (userChoice == "2") {
        encryptMessage = true;
    } else {
        std::cout << "Unsupported mode!";
        return 1;
    }

    std::cout << "Enter your message: ";
    std::getline(std::cin, inputMessage, '\n');

    if (!encryptMessage)
        alphabet.swap(key);

    for (char c: inputMessage) {
        // find c in alphabet and get its index
        // add key[index] to encrypted message
        // if c not in alphabet, add it directly
        if (alphabet.find(c) == alphabet.npos)
            outputMessage += c;
        else
            outputMessage += key.at(alphabet.find(c));

    }

    std::cout << "Your message is: " << outputMessage << std::endl;

    return 0;
}