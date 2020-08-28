#include "openssl.h"





    void SymmetricChiper::initialize(unsigned char* key) 
    {
        m_key = key;
        
    }
    
    void SymmetricChiper::Encrypt(unsigned char* in, unsigned char* out){

        
        AES_set_encrypt_key(m_key, 128, &m_enc);
        AES_encrypt(in, out, &m_enc);
    }

    void SymmetricChiper::Decrypt(unsigned char* in, unsigned char* out){
        AES_set_decrypt_key(m_key, 128, &m_enc);
        AES_decrypt(in, out, &m_enc);      

    }

    void SymmetricChiper::print(unsigned char* text, size_t size){
        for(size_t i = 0; i < size; i++){
            fprintf(stdout, "%02X", text[i]);
        }
        printf("\n");
    }

 
