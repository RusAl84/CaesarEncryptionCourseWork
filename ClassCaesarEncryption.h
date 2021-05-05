#pragma once
#include <string>
using namespace std;
class ClassCaesarEncryption
{
private:
	string decodingSting;
	string encryptionSting;
	string EncryptionTable[33][2]; // 1 - �������� �����; 2 ����� � �����
public:
	ClassCaesarEncryption() {
		/// <summary>
		/// �������� ������� ����������
		/// </summary>
		EncryptionTable[0][0] = '�'; EncryptionTable[0][1] = '�';
		//...
		EncryptionTable[13][0] = '�'; EncryptionTable[13][1] = '�';
		//...
		EncryptionTable[25][0] = '�'; EncryptionTable[25][1] = '�';
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

