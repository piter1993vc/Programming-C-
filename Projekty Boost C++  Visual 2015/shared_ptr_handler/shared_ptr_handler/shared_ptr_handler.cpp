// shared_ptr_handler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost\shared_ptr.hpp>
#include <Windows.h>
using namespace boost;

int main()
{
	shared_ptr<void> handle(OpenProcess(PROCESS_SET_INFORMATION, FALSE, GetCurrentProcessId()), CloseHandle);
    return 0;
}

