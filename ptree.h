#ifndef _PTREE_H_
#define _PTREE_H_
#include <stdbool.h>

#define SLEN 20
typedef struct item{
	char word[SLEN];
	int times;
}Item;

#define MAXITEMS 1000
typedef struct trnode{
	Item item;
	struct trnode * left;
	struct trnode * right;	
}Trnode;

typedef struct tree{
	Trnode * root;
	int size;
}Tree;

// 初始化树
void InitializeTree(Tree * ptree);
// 判定树是否已空
bool TreeIsEmpty(Tree * ptree);
// 判定树是否已满
bool TreeIsFull(Tree * ptree);
// 树中的项数
int TreeItemCount(Tree * ptree);
// 添加节点
int AddItem(const Item * pi, Tree * ptree);
// 在树内查找
bool InTree(const Item * pi, Tree * ptree);
// 删除项
bool DeleteItem(const Item * pi, Tree * ptree);
// 遍历树
void Traverse(const Tree * ptree, void(*pfun)(Item item));
// 清空树
void DeleteAll(Tree * ptree);

#endif