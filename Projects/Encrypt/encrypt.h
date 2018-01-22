#ifndef TheMaddLabbEncryption
#define TheMaddLabbEncryption

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//class declarations
class Encrypt {
	
	public:
		int i;
		string passEnter;
		string passConfirm;	
		string decryptEnter;
		string decryptConfirm;
		string encrytOrDecryt;
		
		Encrypt();
		encrytOrDecrytFucntion();
		beginEncrypt();
		printEncrypt();
		beginDecrypt();
		printDecrypt();
		encryptionFunction();
		decryptionFunction();
		
};

#endif //TheMaddLabbEncryption
