#pragma once
#include "common.h"
#include "OptionConfig.h"

#pragma region GUID definitions
DEFINE_GUID(CLSID_ProgramsFolder, 0x7BE9D83C, 0x0A729, 0x4D97, 0x0B5, 0x0A7, 0x1B, 0x73, 0x13, 0x0C3, 0x9E, 0x0A);
DEFINE_GUID(CLSID_ProgramsFolderCommon, 0x0FC1EE10B, 0x7EF6, 0x41B5, 0x0BB, 0x60, 0x98, 0x0D2, 0x6D, 0x0D9, 0x0FC, 0x0D1);
DEFINE_GUID(CLSID_ProgramsFolderAndFastItems, 0x865E5E76, 0x0AD83, 0x4DCA, 0x0A1, 0x9, 0x50, 0x0DC, 0x21, 0x13, 0x0CE, 0x9A);
DEFINE_GUID(CLSID_MergedFolder, 0x26FDC864, 0x0BE88, 0x46E7, 0x92, 0x35, 0x3, 0x2D, 0x8E, 0x0A5, 0x16, 0x2E);
DEFINE_GUID(IID_IAugmentedFolder, 0x2f711b17, 0x773c, 0x41d4, 0x93, 0xfa, 0x7f, 0x23, 0xed, 0xce, 0xcb, 0x66);
DEFINE_GUID(CLSID_StartMenu, 0x4622ad11, 0xff23, 0x11d0, 0x8d, 0x34, 0x0, 0xa0, 0xc9, 0xf, 0x27, 0x19);
DEFINE_GUID(CLSID_StartMenuFolder, 0x48e7caab, 0xb918, 0x4e58, 0xa9, 0x4d, 0x50, 0x55, 0x19, 0xc7, 0x95, 0xdc);
//DEFINE_GUID(BHID_SFObject, 0x3981E224, 0x0F559, 0x11D3, 0x8E, 0x3A, 0x0, 0x0C0, 0x4F, 0x68, 0x37, 0x0D5);
DEFINE_GUID(GUID_000214e6_0000_0000_c000_000000000046, 0x000214e6, 0x0000, 0x0000, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
#pragma endregion

class CProgramsFolderClassFactory : public IClassFactory
{
public:
	CProgramsFolderClassFactory(REFCLSID clsid);
	~CProgramsFolderClassFactory();

	//IUnknown
	STDMETHODIMP QueryInterface(REFIID riid, void** ppvObject);
	STDMETHODIMP_(ULONG) AddRef(void);
	STDMETHODIMP_(ULONG) Release(void);

	//IClassFactory
	STDMETHODIMP CreateInstance(IUnknown* pUnkOuter, REFIID riid, void** ppvObject);
	STDMETHODIMP LockServer(BOOL fLock);

	IID clsid;
};