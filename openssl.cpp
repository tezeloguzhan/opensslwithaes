
#include "openssl.h"



int main(){
    
    unsigned char plainText[16] = "deneme";
    unsigned char chipherText[16];
    unsigned char out[16];
    SymmetricChiper obj;
    obj.Encrypt(plainText, chipherText);
    obj.Decrypt(chipherText, out);
    obj.print(chipherText, 16);
    std::cout << (char*)out << std::endl;
    obj.print(out, 16);
    
    

}