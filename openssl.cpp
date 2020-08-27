
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
    unsigned char out[20];
    unsigned char decout[20];
    
  void Encrypt(){

        
        unsigned char text[]="procenne";

        
        
        unsigned char key[]="01234567890123456789";

        
        AES_set_encrypt_key(key,128,&enc);
        AES_encrypt(text,out,&enc);
        cout<<"encrypted :\n"<<out<<endl;
     

    }

    void Decrypt(){
         unsigned char key[]="01234567890123456789";
        AES_set_decrypt_key(key,128,&enc);
        
        AES_decrypt(out,decout,&enc);
        cout<<"Decrypted :\n"<<decout;

        

    }

};

int main(){
    
    SymmetricChipper obj;
    obj.Encrypt();
    obj.Decrypt();
    
    

}