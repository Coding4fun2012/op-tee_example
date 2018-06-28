#include "my_test_ca.h"
/* OP-TEE TEE client API (built by optee_client) */
#include <tee_client_api.h>

void g_CA_PrintfBuffer(CHAR* buf, UINT32 len);
void g_CryptoVerifyCa_Helloworld(void);
int g_CryptoVerifyCa_Random(UINT32 len, CHAR* output);
int g_CryptoVerifyCa_Sha(CHAR* pData, UINT32 len, EN_SHA_MODE shaMode, CHAR* output, UINT32 outLen);
int l_CryptoVerifyCa_OpenSession(TEEC_Session* session);
int l_CryptoVerifyCa_SendCommand(TEEC_Operation* operation, TEEC_Session* session, uint32_t commandID);
int l_CryptoVerifyCa_TaskInit(void);
void soprint();

