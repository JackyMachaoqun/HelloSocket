#define WIN32_LEAN_AND_MEAN 
#include <iostream>
#include <windows.h>
#include <WinSock2.h>

using namespace std;
int main()
{
	WORD ver = MAKEWORD(2,2);  //windows定义号
	WSADATA dat;    //一个数据指针
	WSAStartup(ver,&dat);
	
	WSACleanup();    //关闭的API
	return 0;
}