#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

//ѧ��
//����
//����
//�Ա�


//struct stu //�ṹ������
//{
// ��Ա����
//	char name[20];
//	short age;
//	char sex[5];
//}s1,s2,s3;//������ȫ�ֵĽṹ�����



//typedef struct stu  //�ṹ������
//{
//	char name[20];
//	short age;
//	char sex[5];
//}stu;//stu�����ͣ�typedef���������
//
//
//int main()
//{
//	struct stu s1 = { "����",22,"��" };
//	stu s2 = { "����",18,"����" };
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
//	struct D d = { "����",{1,'1',"i'am hungry",0.05},arr};
//	printf("%s", d.s.arr);//i'am hungry
//	printf("%s", d.ch);//����
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
//	struct stu a = { "����",21,"17717920748","��"};
//	print1(a);
//	print2(&a);
//	return 0;
//}