
#include <iostream>
#include <stdlib.h>
#include <openssl/aes.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>


using namespace std;




class SymmetricChiper{
    private:
    AES_KEY m_enc;
    unsigned char* m_key;
    public:
     
    void initialize(unsigned char* key);
    //void initialize(std::string& hexKey);
    void Encrypt(unsigned char* in, unsigned char* out);
    void Decrypt(unsigned char* in, unsigned char* out);
    void print(unsigned char* text, size_t size);

};