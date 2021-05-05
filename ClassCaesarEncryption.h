#pragma once
#include <string>
using namespace std;
class ClassCaesarEncryption
{
private:
	string decodingSting;
	string encryptionSting;
	string EncryptionTable[33][2]; // 1 - Исходная буква; 2 буква в шифре
public:
	ClassCaesarEncryption() {
		/// <summary>
		/// Заполняю таблицу шифрования
		/// </summary>
		EncryptionTable[0][0] = 'а'; EncryptionTable[0][1] = 'г';
		//...
		EncryptionTable[13][0] = 'м'; EncryptionTable[0][1] = 'п';
		//...
		EncryptionTable[25][0] = 'ш'; EncryptionTable[25][1] = 'ы';
	}
	string getDecodingSting(string inString) {

	};
	string getEncryptionSting(string inString) {
	
	};
};

