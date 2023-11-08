#pragma once
#include <WinSock2.h>
#include <Windows.h>
#include <process.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <iostream>
#include <string>
#include <process.h>
#include <algorithm>
using namespace std;
#pragma comment(lib, "ws2_32")
#pragma warning(disable:4996)
IN_ADDR GetDefaultMyIP();
