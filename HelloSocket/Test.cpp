#define WIN32_LEAN_AND_MEAN 
#include <iostream>
#include <windows.h>
#include <WinSock2.h>

using namespace std;
int main()
{
	WORD ver = MAKEWORD(2,2);  //windows�����
	WSADATA dat;    //һ������ָ��
	WSAStartup(ver,&dat);
	
	WSACleanup();    //�رյ�API
	return 0;
}