/******************************************
 *						                  *
 * �ļ���: ��09 ����                      *
 * 						                  *
 * �ļ���: SequnceSearch-main.c           *
 * 							              *
 * ��  ��: ˳����ң����������غ������� *
 *                                        *
 ******************************************/

#include <stdio.h>
#include "SequnceSearch.c" 						//**��09 ����**//

#define Max 100									//���ұ���Ԫ�ظ���

int main(int argc, char *argv[])
{	
	Table T;
		
	printf("���������һ�����ұ�...\n");
	{
		FILE *fp;
		
		fp = fopen("TestData_Table.txt", "r");	
		Create(fp, &T, Max);	
		Traverse(T, PrintKey);	
		printf("\n");
	}	
	PressEnter; 
	
	printf("��1\n������ Search_Seq ����...\n");	//1.����Search_Seq����		
	{
		printf("�ؼ��� 39 ��������ұ��е�λ��Ϊ��");
		printf("%d\n", Search_Seq(T, 39));
		printf("\n");
	}	
	PressEnter; 

	return 0;
}