#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

//学生
//姓名
//年龄
//性别


//struct stu //结构体类型
//{
// 成员变量
//	char name[20];
//	short age;
//	char sex[5];
//}s1,s2,s3;//是三个全局的结构体变量



//typedef struct stu  //结构体类型
//{
//	char name[20];
//	short age;
//	char sex[5];
//}stu;//stu是类型，typedef定义的名字
//
//
//int main()
//{
//	struct stu s1 = { "张三",22,"男" };
//	stu s2 = { "马三",18,"保密" };
//	return 0;
//}

//struct S
//{
//	int a;
//	char b;
//	char arr[15];
//	double c;
//};
//
//struct D
//{
//	char ch[5];
//	struct S s;
//	char* p;
//};
//
//
//int main()
//{
//	char arr[] = "rnw";
//	struct D d = { "张三",{1,'1',"i'am hungry",0.05},arr};
//	printf("%s", d.s.arr);//i'am hungry
//	printf("%s", d.ch);//张三
//	printf("%s", d.p);
//	return 0;
// }




//struct stu
//{
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//};
//
//void print1(struct stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
//void print2(struct stu* ps)
//{
//	printf("nume:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//
//
//
//int main()
//{
//	struct stu a = { "张三",21,"17717920748","男"};
//	print1(a);
//	print2(&a);
//	return 0;
//}