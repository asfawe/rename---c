#include <stdio.h>
// rename() 함수가 선언되어 있는 stdio.h를 포함합니다.

// rename() 함수의 원형은 다음과 같습니다.

// int rename(const char *oldname, const char *newname);

// oldname은 원래의 파일명이며, newname은 새로 변경할 파일명입니다. 

void main(void)
{
	char *oldname = "c:\\temp\\file.txt";
	char *newname = "c:\\temp\\file_1.txt";
	
	if(rename(oldname, newname) != 0)
	// file.txt를 file_1.txt로 파일명을 변경합니다. 변경하려는 파일이 존재하지 않거나 사용중인 경우,
	// 파일의 이름을 변경할 수 없습니다. 
	{
		perror("파일명 변경 에러");	
	}	
	else
	{
		puts("파일명을 성공적으로 변경하였습니다.");
	}
} 
