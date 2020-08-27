



#include <iostream>
#include <stdlib.h>
#include <openssl/aes.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>


using namespace std;




class SymmetricChiper{
    
    
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