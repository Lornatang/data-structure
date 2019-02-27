/********************************
 *                              *
 * �ļ���: ��10 �ڲ�����        *
 *                              *
 * �ļ���: QuickSort.h          *
 *                              *
 * ��  ��: ����������ز����б� *
 *                              *
 ********************************/

#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "../00 SequenceListType/SequenceListType.c"	//**��10 �ڲ�����**//

/* �����������б� */
int Partition_1(SqList_sort *L, int low, int high);
/*��������������������������������������
��(01)�㷨10.6(a)�����һ�˿������� ��
��������������������������������������*/

int Partition_2(SqList_sort *L, int low, int high);
/*��������������������������������������
��(02)�㷨10.6(b)�����һ�˿������� ��
��������������������������������������*/

void QSort(SqList_sort *L, int low, int high);
/*��������������������������������������������������������������
��(03)�㷨10.8����˳���L�е�������L.r[low..high]���������� ��
��������������������������������������������������������������*/

void QuickSort(SqList_sort *L);
/*��������������������������������������
��(04)�㷨10.7����˳���L���������� ��
��������������������������������������*/

#endif 