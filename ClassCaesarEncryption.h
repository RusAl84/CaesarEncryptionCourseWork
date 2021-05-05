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
		EncryptionTable[13][0] = 'м'; EncryptionTable[13][1] = 'п';
		//...
		EncryptionTable[25][0] = 'ш'; EncryptionTable[25][1] = 'ы';
	}
	string getDecodingSting(string inString) {

	};
	string getEncryptionSting(string inString) {
		string outString = "";
		for (int i = 0; i < inString.length(); i++) {
			string tmpString = "";
			tmpString = inString[i];
			//cout << tmpString<<endl;
			int numRow = getNumRowOfEncryptionTableSymbol(tmpString);
			if (numRow > 0)
			{
				outString += EncryptionTable[numRow][1];
			}
			else
			{
				outString += tmpString;
			}
		}
		return outString;
	};

	int getNumRowOfEncryptionTableSymbol(string ch) {
		for (int i = 0; i < 33; i++)
			if (strcmp(ch.c_str(), EncryptionTable[i][0].c_str())==0)
				return i;
		return -1;
	}
};

