// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#include "targetver.h"
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <string>

// Simple defines
#define BASE_FILE_NAME		L"member_attendence"	// appended appropriate info (i.e. timestamp & extension)
#define DEFAULT_FILE_EXT	EXT_JSON
#define OUTPUT_SIZE			32768					// 2^15 bytes, since we'll be writing a bit o' data

// File extensions
enum FILE_EXTS {
	EXT_CSV,
	EXT_TXT,
	EXT_JSON
};

extern "C" {
	__declspec(dllexport) void __stdcall RVExtension(char *output, int outputSize, const char *input);
};

void initWrite();
void endWrite();