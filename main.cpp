#include <iostream>
#include <winsock2.h>
#pragma comment(lib,"libws2_32.a")
using namespace std;

#define PORT 5500
#define PACKET_SIZE 1024

int main(int, char**){
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2,2), &wsaData);
    WSACleanup();
}
