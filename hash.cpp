// barrystyle 26062024

#include <openssl/sha.h>

void sha256(const char* input, char* output, unsigned int len)
{
	SHA256((const unsigned char*)input, len, (unsigned char*)output);
}

void sha256d(const char* input, char* output, unsigned int len)
{
	SHA256((const unsigned char*)input, len, (unsigned char*)output);
	SHA256((const unsigned char*)output, 32, (unsigned char*)output);
}
