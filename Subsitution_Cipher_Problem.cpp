#include <iostream>
#include <string>
using namespace std;
class Cipher
{
    public:
    string input()
    {
        string m;
        cout<<"Enter the message "<<endl;
        getline(cin,m);
        return m;
    }
    void display(string m)
    {
      cout << "Encrypted message is " <<m<< endl;
    }
};
int main()
{
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string key = "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr";
    string message{};
    Cipher c;
    message=c.input();
    string encrypted_message{};

    for (int i = 0; i < message.length(); i++)
    {
        char ch=message.at(i);
        if (alphabet.find(ch)!=string::npos)
        {
            int index = alphabet.find(ch);
            encrypted_message = encrypted_message + key[index];
        }
        else
            encrypted_message = encrypted_message + ch;
    }
    c.display(encrypted_message);
}