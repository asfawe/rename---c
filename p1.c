#include <stdio.h>
// rename() �Լ��� ����Ǿ� �ִ� stdio.h�� �����մϴ�.

// rename() �Լ��� ������ ������ �����ϴ�.

// int rename(const char *oldname, const char *newname);

// oldname�� ������ ���ϸ��̸�, newname�� ���� ������ ���ϸ��Դϴ�. 

void main(void)
{
	char *oldname = "c:\\temp\\file.txt";
	char *newname = "c:\\temp\\file_1.txt";
	
	if(rename(oldname, newname) != 0)
	// file.txt�� file_1.txt�� ���ϸ��� �����մϴ�. �����Ϸ��� ������ �������� �ʰų� ������� ���,
	// ������ �̸��� ������ �� �����ϴ�. 
	{
		perror("���ϸ� ���� ����");	
	}	
	else
	{
		puts("���ϸ��� ���������� �����Ͽ����ϴ�.");
	}
} 
