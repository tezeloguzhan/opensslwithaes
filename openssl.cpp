
#include <iostream>
#include <stdlib.h>
#include <openssl/aes.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

using namespace std;



class SymmetricChipper{
    
    
    public:
   

    AES_KEY enc;    
  void Encrypt(unsigned char* in, unsigned char* out){

        unsigned char key[]="01234567890123456789";
        AES_set_encrypt_key(key, 128, &enc);
        AES_encrypt(in, out, &enc);
    }

    void Decrypt(unsigned char* in, unsigned char* out){
         unsigned char key[]="01234567890123456789";
        AES_set_decrypt_key(key, 128, &enc);
        AES_decrypt(in, out, &enc);      

    }

    void print(unsigned char* text, size_t size){
        for(size_t i = 0; i < size; i++){
            fprintf(stdout, "%02X", text[i]);
        }
        printf("\n");
    }

};

int main(){
    
    unsigned char plainText[16] = "deneme";
    unsigned char chipherText[16];
    unsigned char out[16];
    SymmetricChipper obj;
    obj.Encrypt(plainText, chipherText);
    obj.Decrypt(chipherText, out);
    obj.print(chipherText, 16);
    std::cout << (char*)out << std::endl;
    obj.print(out, 16);
    
    

}