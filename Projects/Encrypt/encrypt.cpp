#include "encrypt.h"



using namespace std;

//class definitions
Encrypt::Encrypt() {
	encrytOrDecrytFucntion();
}

Encrypt::encrytOrDecrytFucntion(){
	
	cout << "Welcome to the Chaffey College Encryption Program: \n" << endl;
	
	cout << "Would you like to encryt or decrypt your password?" << endl;
	getline(cin,encrytOrDecryt);
	
	if(encrytOrDecryt == "encrypt")
	{
		beginEncrypt();
	}
	if(encrytOrDecryt == "decrypt")
	{
		beginDecrypt();
	}
}

Encrypt::beginEncrypt(){
	cout << endl;
	cout << "Please enter the password you would like encrypted: " << endl;
	getline(cin,passEnter);
	
	cout << endl;
	cout << "Please confirm the password you would like encrypted: " << endl;
	getline(cin,passConfirm);

		
	if(passConfirm == passEnter){
		cout << endl;
		cout << "Passwords Match. The Encrypted Password Is:  " << endl;
		
		
			encryptionFunction();
		}
	
	else {
		cout << "Passwords did not match.\n" << endl;
		beginEncrypt();
	}
	
}

Encrypt::beginDecrypt(){
	cout << endl;
	cout << "Please enter the encrypted password you would like decrypted: " << endl;
	getline(cin,decryptEnter);

	cout << endl;
	cout << "Please confirm the encrypted password you would like decrypted: " << endl;
	getline(cin,decryptConfirm);
	
		if(decryptConfirm == decryptEnter){
		cout << endl;
		cout << "Encrypted Passphrase Match. The Decrypted Password Is: " << endl;
			decryptionFunction();
		}
	else {
		beginDecrypt();
	}
}

Encrypt::encryptionFunction(){
	
	for(int i=0; i<passConfirm.size(); i++){
			if(passConfirm[i] == 'a'){
				replace(passConfirm.begin(),passConfirm.end(), 'a','!');		
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'b'){
				replace(passConfirm.begin(),passConfirm.end(), 'b','@');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'c'){
				replace(passConfirm.begin(),passConfirm.end(), 'c','#');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'd'){
				replace(passConfirm.begin(),passConfirm.end(), 'd','$');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'e'){
				replace(passConfirm.begin(),passConfirm.end(), 'e','%');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'f'){
				replace(passConfirm.begin(),passConfirm.end(), 'f','^');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'g'){
				replace(passConfirm.begin(),passConfirm.end(), 'g','&');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'h'){
				replace(passConfirm.begin(),passConfirm.end(), 'h','*');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'i'){
				replace(passConfirm.begin(),passConfirm.end(), 'i','(');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'j'){
				replace(passConfirm.begin(),passConfirm.end(), 'j',')');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'k'){
				replace(passConfirm.begin(),passConfirm.end(), 'k','-');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'l'){
				replace(passConfirm.begin(),passConfirm.end(), 'l','=');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'm'){
				replace(passConfirm.begin(),passConfirm.end(), 'm','+');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'n'){
				replace(passConfirm.begin(),passConfirm.end(), 'n','_');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'o'){
				replace(passConfirm.begin(),passConfirm.end(), 'o','[');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'p'){
				replace(passConfirm.begin(),passConfirm.end(), 'p',']');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'q'){
				replace(passConfirm.begin(),passConfirm.end(), 'q','<');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'r'){
				replace(passConfirm.begin(),passConfirm.end(), 'r','|');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 's'){
				replace(passConfirm.begin(),passConfirm.end(), 's','}');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 't'){
				replace(passConfirm.begin(),passConfirm.end(), 't','{');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'u'){
				replace(passConfirm.begin(),passConfirm.end(), 'u','>');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'v'){
				replace(passConfirm.begin(),passConfirm.end(), 'v',';');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'w'){
				replace(passConfirm.begin(),passConfirm.end(), 'w',':');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'x'){
				replace(passConfirm.begin(),passConfirm.end(), 'x','"');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'y'){
				replace(passConfirm.begin(),passConfirm.end(), 'y',',');
			}
	}
	for(int i=0; i<passConfirm.length(); ++i){
			if(passConfirm[i] == 'z'){
				replace(passConfirm.begin(),passConfirm.end(), 'z','.');
			}
	}	

		
		
		printEncrypt();
}

Encrypt::decryptionFunction(){
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '!'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '!','a');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '@'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '@','b');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '#'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '#','c');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '$'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '$','d');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '%'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '%','e');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '^'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '^','f');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '&'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '&','g');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '*'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '*','h');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '('){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '(','i');		
			}
	}	
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == ')'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), ')','j');		
			}
	}	
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '-'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '-','k');		
			}
	}	
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '='){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '=','l');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '+'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '+','m');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '_'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '_','n');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '['){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '[','o');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == ']'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), ']','p');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '<'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '<','q');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '|'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '|','r');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '}'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '}','s');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '{'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '{','t');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '>'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '>','u');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == ';'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), ';','v');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == ':'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), ':','w');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '"'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '"','x');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == ','){
				replace(decryptConfirm.begin(),decryptConfirm.end(), ',','y');		
			}
	}
	for(int i=0; i<decryptConfirm.size(); i++){
			if(decryptConfirm[i] == '.'){
				replace(decryptConfirm.begin(),decryptConfirm.end(), '.','z');		
			}
	}	
	printDecrypt();
	
}

Encrypt::printEncrypt(){
	cout << passConfirm << endl;
	return 0;
}

Encrypt::printDecrypt(){
	cout << decryptConfirm << endl;
	return 0;
}	

		
