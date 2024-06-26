#include <base58.h>
#include <hash.h>

int main()
{
	std::vector<unsigned char> vchRet;
	std::string address = "12sSFpkFKVXwJp9F6jTTfVa4KhUBV6Ng8X";
	bool result = DecodeBase58Check(address.c_str(), vchRet);

	printf("%s is %s\n", address.c_str(), result ? "valid" : "invalid");

	for (unsigned int i=0; i<vchRet.size(); i++) {
	    printf("%02hhx", vchRet[i]);
	}
	printf("\n");

	return 1;
}

	
