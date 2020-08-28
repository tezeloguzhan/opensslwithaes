
#include "openssl.h"


#define DEBUG
#ifdef  DEBUG
#define log_debug(x) std::cout << (x) << std::endl;
#else
#define log_debug(x)
#endif 



int main(){
    
    unsigned char plainText[16] = "deneme";
    unsigned char chipherText[16];
    unsigned char key[16] = {0x02, 0x05, 0x10, 0x85, 0x02, 0x05, 0x10, 0x85, 0x02, 0x05, 0x10, 0x8, 0x02, 0x05, 0x10, 0x85};
    unsigned char out[16];
    SymmetricChiper obj;
    obj.initialize(key);
    obj.Encrypt(plainText, chipherText);
    obj.Decrypt(chipherText, out);
    obj.print(chipherText, 16);
    log_debug(out);
    obj.print(out, 16);
    
    

}