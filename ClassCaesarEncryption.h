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
		EncryptionTable[13][0] = '�'; EncryptionTable[0][1] = '�';
		//...
		EncryptionTable[25][0] = '�'; EncryptionTable[25][1] = '�';
	}
	string getDecodingSting(string inString) {

	};
	string getEncryptionSting(string inString) {
	
	};
};

