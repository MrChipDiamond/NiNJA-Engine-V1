#pragma once

#include <xtl.h>
#include <xboxmath.h>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <map>
#include <algorithm>
#include "xkelib.h"
#include "XConfig.h"
#include "Config.h"
//#include <d3d9.h>

typedef unsigned __int64 QWORD;
//typedef int *D3DDevice;
typedef unsigned char byte;

using namespace std;
//VOID DbgPrint(const CHAR* fmt, ...);
#if defined(_DEBUG) || defined(DBG_PRINT)
VOID DbgPrint(const CHAR* fmt, ...);
#else
#define DbgPrint1

#endif