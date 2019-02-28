/*********************************
 *							     *
 * �ļ���: ��03 ջ�Ͷ���\04 Maze *
 * 							     *
 * �ļ���: Maze.h                *
 * 							     *
 * ��  ��: �Թ���ز����б�      *
 *                               *
 *********************************/

#ifndef MAZE_H
#define MAZE_H

#include <stdio.h>
#include <stdlib.h>                  //�ṩsystem��rand��srandԭ��
#include <time.h>                    //�ṩtimeԭ��
#include "../../��01 ����/Status.h"  //**��01 ����**//

/* �궨�� */
#define N 15  //�Թ��Ĵ�СΪN��N
#define X \
  4  // X���������ȡ�࣬�����ɵ��������Χ��0��X-1
     // XԽ�����ɿ�ͨ���Թ��ĸ��ʾ�Խ��
#define SleepTime 3  // SleepTime��������ʱ����

/* �Թ����Ͷ��� */
typedef enum  //�Թ�ͨ��������
{ Wall,       //��ǽ
  Obstacle,   //�Թ��ϰ�
  Way,        //·��
  DeadLock,   //·���ϵġ�����ͬ��
  East,
  South,
  West,
  North  //���ʷ���-��������
} MazeNode;
typedef struct  //�Թ�ͨ��������
{
  int x;  //ͨ����ĺᡢ�����궨��
  int y;
} PosType;
typedef struct  //ͨ������Ϣ
{
  int ord;       //ͨ����ġ���š�
  PosType seat;  //ͨ����ġ�����λ�á�
  int di;        //��һ���÷��ʵġ�����
} SElemType_Sq;
#include "../01 SequenceStack/SequenceStack.c"  //**��03 ջ�Ͷ���**//
typedef int MazeType;                           //�Թ�Ԫ������

/* �Թ������б� */
Status MazePath(MazeType maze[][N], PosType start, PosType end);
/*����������������������������������
��(01)�㷨3.3���Թ�Ѱ·����ٷ��� ��
����������������������������������*/

void InitMaze(MazeType maze[][N], PosType *start, PosType *end);
/*��������������������������������������
��(02)�Թ��ĳ�ʼ��,��������ڵĳ�ʼ�� ��
��������������������������������������*/

void PaintMaze(MazeType maze[][N]);
/*����������������������
��(03)����Ļ�ϻ����Թ���
����������������������*/

void ShowMaze(MazeType maze[][N]);
/*����������������
��(04)�Թ�����ʾ��
����������������*/

Status EqualPosType(PosType a, PosType b);
/*����������������������������������������
��(05)�Ƚ��Թ�������ͨ�����Ƿ�Ϊͬһͨ���驧
����������������������������������������*/

Status Pass(PosType seat, MazeType maze[][N]);
/*����������������������������
��(06)�ж���ͨ�����Ƿ�δ���ʩ�
����������������������������*/

void FootPrint(PosType seat, MazeType maze[][N]);
/*����������������������������������
��(07)����δ���ʽ��ʱ���³�ʼ�㼣��
����������������������������������*/

void SetSElemType(SElemType_Sq *e, int ord, PosType seat, int di);
/*����������������������
��(08)����ͨ�������Ϣ��
����������������������*/

PosType NextPos(PosType seat, int di);
/*����������������������
��(09)��ǰͨ����ĺ�̩�
����������������������*/

Status IsCross(PosType seat);
/*��������������������������
��(10)�жϵ�ǰλ���Ƿ�Խ�穧
��������������������������*/

void MarkPrint(PosType seat, MazeType maze[][N]);
/*������������������������������������
��(11)��ǵ�ǰλ���ϵ�ͨ���鲻�ɷ��ʩ�
������������������������������������*/

#endif
