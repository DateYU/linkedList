#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DataType;

typedef struct ListNode
{
    struct ListNode *prev;  // 指向父结点指针
    DataType val;	   // 数据域
    struct ListNode *next; // 指向子结点指针 
}List;

// 初始化循环双链表
List *listInit();

// 创建一个新节点
List *newNode(DataType val);

// 在指定节点插入元素
void insertList(List *key,DataType val);

// 尾插法
void pushBack(List *ptr, DataType x);

// 尾删
void popBack(List *ptr);

// 头插法
void pushFornt(List *ptr, DataType x);

// 头删
void popFornt(List *ptr);

// 删除指定结点前的元素
DataType popList(List *key,DataType val);


// 输出双链表
void printList(List *ptr);
