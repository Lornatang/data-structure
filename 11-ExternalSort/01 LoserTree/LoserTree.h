/******************************
 *                            *
 * �ļ���: ��11 �ⲿ����      *
 *                            *
 * �ļ���: LoserTree.h        *
 *                            *
 * ��  ��: ��������ز����б� *
 *                            *
 ******************************/

#ifndef LOSERTREE_H
#define LOSERTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include "../../��01 ����/Status.h"		//**��01 ����**//
#include "../../��01 ����/Scanf.c"		//**��01 ����**//

/* �궨�� */
#ifndef MAXSIZE
#define MAXSIZE 2000					//һ������ʾ����˳�������󳤶�
#endif
#include "../../��10 �ڲ�����/10 MergingSort/MergingSort.c"//**��10 �ڲ�����**//

#define MAX 2500						//��������ؼ��ָ��� 
#define K 5								//K-·�鲢							
#define MAXKEY INT_MAX					//�ؼ��ֿ��ܵ����ֵ
#define MINKEY INT_MIN					//�ؼ��ֿ��ܵ���Сֵ

/* k-·�鲢���������Ͷ��� */
typedef int LoserTree[K];				//����������ȫ�������Ҳ���Ҷ�ӣ��ɲ���˳��洢�ṹ 
typedef struct
{
	KeyType key;
}ExNode;								//���㣬ֻ��Ŵ��鲢��¼�Ĺؼ��� 
typedef ExNode External[K+1];		

/* �����������б� */
void K_Merge(FILE *fp_out, LoserTree ls, External b);
/*����������������������������������������������������������������������
��(01)�㷨11.1�����ð�����ls��k������鲢���еļ�¼�鲢������鲢�Ρ� ��
����������������������������������������������������������������������*/

void Adjust(LoserTree ls, External b, int s); 
/*��������������������������������������
��(02)�㷨11.2����b[s]������������������
��������������������������������������*/

void CreateLoserTree(LoserTree ls, External b);
/*������������������������������������������������������
��(03)�㷨11.3�����δ�b[k-1..0]����������lsΪ�������� ��
������������������������������������������������������*/

void input(FILE *fp[K], int *x, int i);
/*����������������������������������
��(04)���ļ�fp[i]�ж�ȡ�ؼ��ֵ�x����
����������������������������������*/

void output(FILE *fp, int x);
/*��������������������������
��(05)��x����������fp�� ��
��������������������������*/

void RandomNum(FILE *fp);
/*������������������������������������
��(06)����MAX���������fp�������ԡ� ��
������������������������������������*/

void Cut_Sort(FILE *fp);
/*��������������������������������������������������������
��(07)���������fp�ֶ������ֱ�д���ļ�[0..k-1].txt�С���
��������������������������������������������������������*/

#endif 