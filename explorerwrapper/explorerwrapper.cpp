// explorerwrapper.cpp: ���������� ���������������� ������� ��� ���������� DLL.
//

#include "stdafx.h"
#include "explorerwrapper.h"


// ������ ���������������� ����������
EXPLORERWRAPPER_API int nexplorerwrapper=0;

// ������ ���������������� �������.
EXPLORERWRAPPER_API int fnexplorerwrapper(void)
{
	return 42;
}

// ����������� ��� ����������������� ������.
// ��. ����������� ������ � explorerwrapper.h
Cexplorerwrapper::Cexplorerwrapper()
{
	return;
}
