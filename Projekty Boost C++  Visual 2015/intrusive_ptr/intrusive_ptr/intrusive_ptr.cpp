// intrusive_ptr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost\intrusive_ptr.hpp>
#include <iostream>
#include <atlbase.h>

void intrusive_ptr_add_ref(IDispatch *p) { p->AddRef(); }
void intrusive_ptr_release(IDispatch *p) { p->Release(); }


void check_windows_folder()
{
	CLSID clsid;
	CLSIDFromProgID(CComBSTR{ "Scripting.FileSystemObject" }, &clsid);
	void *p;
	CoCreateInstance(clsid, 0, CLSCTX_INPROC_SERVER, __uuidof(IDispatch), &p);
	boost::intrusive_ptr<IDispatch> disp{ static_cast<IDispatch*>(p), false };
	CComDispatchDriver dd{ disp.get() };
	CComVariant arg{ "C:\\Windows\\system32\\1033" };
	CComVariant ret{ false };
	dd.Invoke1(CComBSTR{ "FolderExists" }, &arg, &ret);
	std::cout << std::boolalpha << (ret.boolVal != 0) << '\n';


}
int main()
{
	CoInitialize(0);
	check_windows_folder();
	CoUninitialize();

    return 0;
}

