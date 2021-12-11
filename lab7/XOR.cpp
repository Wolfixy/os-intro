#include <iostream>
#include <vector>
#include <string>

using namespace std;

string tranform(string toEncrypt) {
    string transformedMessage;
    for (int i = 0; i < toEncrypt.size(); ++i) {
        int ia = toascii(toEncrypt.at(i));
        transformedMessage.push_back(ia);
    }
    return transformedMessage;
}

string keyGeneration(string toEncrypt) {
    string key;
    static const char code[] = "0123456789";

    for (int i = 0; i < toEncrypt.size(); ++i) {
        key += code[rand() % (sizeof(code) - 1)];
    }

    return key;
}

string encryptDecrypt(string toEncrypt, string key) {
    string output = toEncrypt;

    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key[i];

    return output;
}

int main(int argc, const char* argv[])
{
    setlocale(LC_ALL, "Russian");

    string message = "� ����� �����, ������!";

    string transformedMessage = tranform(message);

    string key = keyGeneration(transformedMessage);

    string encrypted = encryptDecrypt(transformedMessage, key);


    cout << "���������: " << message << "\n";
    cout << "��������������� ���������: ";
    for (int i = 0; i < transformedMessage.size(); ++i) {
        cout << int(transformedMessage[i]);
    }
    cout << "\n" << "����: " << key << "\n";
    cout << "������������� ���������: ";
    for (int i = 0; i < encrypted.size(); ++i) {
        cout << int(encrypted[i]);
    }

    return 0;
}