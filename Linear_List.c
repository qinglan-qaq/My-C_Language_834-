#include "stdio.h"
#include <stdbool.h>
#define MaxSize 100
#define ElemType int

//顺序表
typedef struct {
    ElemType data[MaxSize];
    int length;
}SqList ;

//初始化
void InitList(SqList L){
    L.length = 0;
};
//判空
bool Empty(SqList L){
    if (L.length == 0){
        return 0;
    }else{
        return 1;
    }
};
//插入
bool ListInsert(SqList &L, int i, int e){

};
bool ListDelete(SqList &L, int i, int &e);          //删除
int GetElem(SqList L, int i);                       //按位查找
int LocateElem(SqList L, int e);                    //按值查找
bool LocateChangeElem(SqList &L, int e, int em);    //按值修改
bool getChangeElem(SqList &L, int i, int em);       //按位修改

void PrintSqList(SqList L);                         //打印函数
int main() {

    SqList L;


    return 0;
}