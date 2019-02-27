/***************************************
 *                                     *
 * �ļ���: ��04 ��\03 BlockChainString *
 *                                     *
 * �ļ���: BlockChainString.h          *
 *                                     *
 * ��  ��: ��������ز����б�          *
 *                                     *
 ***************************************/

#ifndef BLOCKCHAINSTRING_H
#define BLOCKCHAINSTRING_H

#include <stdio.h> 
#include <stdlib.h>						//�ṩmalloc��realloc��free��exitԭ��
#include <string.h>						//�ṩstrlenԭ��
#include "../../��01 ����/Status.h"		//**��01 ����**//

/* �궨�� */
#define CHUNKSIZE 3						//���С���Զ��壩 

/* ���Ŀ����洢���Ͷ��� */
typedef struct Chunk 
{
	char ch[CHUNKSIZE];					
	struct Chunk *next;
}Chunk;
typedef struct
{
	Chunk *head, *tail;					//����ͷ��βָ�� 
	int curlen;							//���ĵ�ǰ���� 
}LString;								

/* �����������б� */
void InitString_L(LString *T);
/*����������������������
��(01)��ʼ��������T�� ��
����������������������*/

Status StrAssign_L(LString *T, char *chars);
/*��������������������������������������
��(02)����һ����ֵ���ڳ���chars�Ĵ�T����
��������������������������������������*/

Status StrCopy_L(LString *T, LString S); 
/*������������������������
��(03)�ɴ�S���Ƶõ���T����
������������������������*/ 
 
Status StrEmpty_L(LString S);
/*������������������������������������������
��(04)��SΪ�մ�������TRUE,���򷵻�FALSE�� ��
������������������������������������������*/

int StrCompare_L(LString S, LString T); 
/*��������������������������������������������������������
��(05)��S>T������ֵ>0����S<T������ֵ<0�����򣬷���ֵ=0����
��������������������������������������������������������*/

int StrLength_L(LString S); 
/*��������������
��(06)�󴮳�����
��������������*/
 
void ClearString_L(LString *S);
/*��������������
��(07)���S�� ��
��������������*/

void Concat_L(LString *T, LString S1, LString S2);
/*��������������������������������������
��(08)��T������S1��S2���Ӷ��ɵ��´��� ��
��������������������������������������*/

Status SubString_L(LString *Sub, LString S, int pos, int len);
/*��������������������������������������������������
��(09)��Sub���ش�S�ĵ�pos���ַ��𳤶�Ϊlen���Ӵ�����
��������������������������������������������������*/

int Index_L(LString S, LString T, int pos);
/*��������������������������������������������������������������
��(10)����T��S�е�pos���ַ����һ�γ��ֵ�λ�ã��������򷵻�0����
��������������������������������������������������������������*/

Status Replace_L(LString *S, LString T, LString V);
/*������������������������������������������������������
��(11)��V�滻����S�г��ֵ�������T��ȵĲ��ص����Ӵ��� ��
������������������������������������������������������*/

Status StrInsert_L(LString *S, int pos, LString T);
/*��������������������������������������
��(12)�ڴ�S�ĵ�pos���ַ�֮ǰ���봮T�� ��
��������������������������������������*/

Status StrDelete_L(LString *S, int pos, int len);
/*������������������������������������������������
��(13)�Ӵ�S��ɾ����pos���ַ��𳤶�Ϊlen���Ӵ��� ��
������������������������������������������������*/

void DestroyString_L(LString *S);
/*����������������
��(14)���ٴ�S�� ��
����������������*/

void StrPrint_L(LString S);
/*����������������
��(15)�����S�� ��
����������������*/

Status GetChar_L(LString S, char *c, int i);
/*������������������������
����*c���ش�S�е�i���ַ���
������������������������*/

#endif