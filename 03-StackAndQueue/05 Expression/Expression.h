/***************************************
 *							           *
 * �ļ���: ��03 ջ�Ͷ���\05 Expression *
 * 							           *
 * �ļ���: Expression.h                *
 * 							           *
 * ��  ��: ����ʽ��ֵ��ز����б�      *
 *                                     *
 ***************************************/

#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <stdio.h>

/* ���Ͷ��� */
typedef char SElemType_Sq;
#include "../01 SequenceStack/SequenceStack.c"  //**��03 ջ�Ͷ���**//

typedef SElemType_Sq OperandType;   //����������
typedef SElemType_Sq OperatorType;  //���������

OperandType EvaluateExpression(char exp[]);
/*����������������������������������������������������������
��(01)�㷨3.4������ʽ��ֵ���������ʽ�в�������ֻ��һλ�� ��
����������������������������������������������������������*/

OperatorType GetTop_OPTR(SqStack OPTR);
/*������������������������������
��(02)��ȡ������ջ��ջ��Ԫ�ء���
������������������������������*/

Status In(SElemType_Sq c);
/*������������������������������
��(03)�ж�c�Ƿ����ڲ��������� ��
������������������������������*/

OperatorType Precede(OperatorType o1, OperatorType o2);
/*����������������������������������������������������
��(04)�ж�ջ�в�����o1�����ʽ�еĲ�����o2�����ȼ�����
����������������������������������������������������*/

OperandType Operate(OperandType a, OperatorType theta, OperandType b);
/*����������������������
��(05)�������ʽ��ֵ����
����������������������*/

#endif
