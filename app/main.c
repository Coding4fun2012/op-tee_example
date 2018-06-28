#include <err.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <so.h>

/*void main(){

}*/

CHAR g_RandomOut[512] = {0};
/* Buffer for sha operation */
CHAR g_ShaTestBuf[] ={
     'Y', 'o', 'u', ' ', 'y', 'o', 'u', ' ', 'c', 'h', 'e', 'c', 'k', ' ', 'n', 'o',
     'w', 'j', 'i', 'a', 'n', ' ', 'b', 'i', 'n', 'g', ' ', 'g', 'u', 'o', ' ', 'z',
     'i', ' ', 'l', 'a', 'i', ' ', 'y', 'i', ' ', 't', 'a', 'o', '!', '!', '!', '!'};
CHAR g_ShaOutput[80] = {0};

CHAR g_Sha1Result[] = 
{   
    0x21, 0x9b, 0x5b, 0x8b, 0x25, 0x6f, 0x0e, 0x52, 0xcb, 0x2f, 0xfe, 0xfd, 0x6c, 0x47, 0xd7, 0xb4, 
    0x44, 0x00, 0x57, 0xc3
};


CHAR g_Sha256Result[] = 
{   
    0xda, 0x52, 0xe9, 0xc2, 0x53, 0xae, 0x03, 0x30, 0xbd, 0x97, 0x3f, 0xa5, 0xf3, 0xea, 0x51, 0x1d, 
    0x31, 0x0a, 0xdf, 0x1f, 0x0a, 0xc0, 0x0e, 0x62, 0x0f, 0x2d, 0x5e, 0x99, 0xf5, 0xc8, 0x6b, 0x8f
};


int main(int argc, char *argv[])
{
	soprint();
    
    if(0 == memcmp(argv[1], "helloworld", 10))
    {
        printf("Entry get helloworld CA\n");
        g_CryptoVerifyCa_Helloworld();
        printf("The Respond helloworld from TA just like follow:\n");
    }

    if(0 == memcmp(argv[1], "sha1", 4))
    {
        printf("Entry sha1 CA\n");
        g_CryptoVerifyCa_Sha(g_ShaTestBuf, sizeof(g_ShaTestBuf), EN_OP_SHA1, g_ShaOutput, 20);
        printf("The Respond hash data from TA just like follow:\n");
        g_CA_PrintfBuffer(g_ShaOutput, 20);
    }



    if(0 == memcmp(argv[1], "sha256", 6))
    {

        printf("Entry sha256 CA\n");
        g_CryptoVerifyCa_Sha(g_ShaTestBuf, sizeof(g_ShaTestBuf), EN_OP_SHA256, g_ShaOutput, 32);
        printf("The Respond hash data from TA just like follow:\n");
        g_CA_PrintfBuffer(g_ShaOutput, 32);
    }
    

    return 0;
}
