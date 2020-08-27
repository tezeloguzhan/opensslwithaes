#include <iostream>
#include <stdlib.h>
#include <openssl/aes.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

using namespace std;
unsigned char key[]="kafamagore";

int main(){

    unsigned char text[]="Procenne";
    unsigned char out[20];
    unsigned char in[20];
    

    AES_KEY encrypt,decrypt;
    AES_set_encrypt_key(key,128,&encrypt);
    AES_encrypt(text,out,&encrypt);
    cout<<"encryp data : "<<out;
    AES_set_encrypt_key(key,128,&decrypt);
    AES_decrypt(text,in,&decrypt);
    cout<<"decrypt data"<<in<<endl;

}


