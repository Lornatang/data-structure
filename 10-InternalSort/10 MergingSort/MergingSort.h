/********************************
 *                              *
 * �ļ���: ��10 �ڲ�����        *
 *                              *
 * �ļ���: MergingSort.h        *
 *                              *
 * ��  ��: �鲢������ز����б� *
 *                              *
 ********************************/

#ifndef MERGINGSORT_H
#define MERGINGSORT_H

#include "../00 SequenceListType/SequenceListType.c"	//**��10 �ڲ�����**//

/* �鲢�������б� */
void Merge(RcdType SR[], RcdType TR[], int i, int m, int n);
/*��������������������������������������������������������������������
��(01)�㷨10.12���������SR[i..m]��SR[m+1..n]�鲢Ϊ�����TR[i..n]�� ��
��������������������������������������������������������������������*/

void MSort(RcdType SR[], RcdType TR[], int s, int t);
/*������������������������������������������������
��(02)�㷨10.13����SR[s..t]�鲢����ΪTR[s..t]�� ��
������������������������������������������������*/

void MergeSort(SqList_sort *L);
/*��������������������������������������
��(03)�㷨10.14����˳���L���鲢���򡣩�
��������������������������������������*/

#endif 