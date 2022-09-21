#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DataType;

typedef struct ListNode
{
    struct ListNode *prev;  // ָ�򸸽��ָ��
    DataType val;	   // ������
    struct ListNode *next; // ָ���ӽ��ָ�� 
}List;

// ��ʼ��ѭ��˫����
List *listInit();

// ����һ���½ڵ�
List *newNode(DataType val);

// ��ָ���ڵ����Ԫ��
void insertList(List *key,DataType val);

// β�巨
void pushBack(List *ptr, DataType x);

// βɾ
void popBack(List *ptr);

// ͷ�巨
void pushFornt(List *ptr, DataType x);

// ͷɾ
void popFornt(List *ptr);

// ɾ��ָ�����ǰ��Ԫ��
DataType popList(List *key,DataType val);


// ���˫����
void printList(List *ptr);
