#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//����ָ��
#if 0
//void test(char **p){
//
//}
char  *mymalloc(char **p)
{
	static char a[100];
	*p= a;
}
int main(){
	//char arr[] = "darqfafafa";
	/*char *arr[5] = { "ad", "dada", "dasfa", "fasfaq", "daafa" };
	test(arr);
	test(&arr[0]);*/
	char *str = NULL;
	mymalloc(&str);
	strcpy(str, "hollow world");
	puts(str);
	system("pause");
	return 0;
}
#endif
#if 0
int main(){
	char arr[] = { 1, 2, 3, 4, 5, 6 };
	printf("%d\n", strlen(&arr + 1));
	system("pause");
	return 0;
}
#endif
#if 0
int main(){
	int a = 6;
	int *p = &a;
	printf("%p\n", p);
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n",(short*)p+0x1);
	printf("%p\n",(double*)p+0x1);
	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	int a[]={1,2,3,4};
	printf("%d\n",sizeof(a));//16
	printf("%d\n",sizeof(a+0));//4
	printf("%d\n",sizeof(*a));//4
	printf("%d\n",sizeof(a+1));//4
	printf("%d\n",sizeof(a[1]));//4
	printf("%d\n",sizeof(&a));//4
	printf("%d\n",sizeof(*&a));//16
	printf("%d\n",sizeof(&a+1));//4
	printf("%d\n",sizeof(&a[0]));//4
	printf("%d\n",sizeof(&a[0]+1));//4
	system("pause");
	return 0;
}
#endif
#if 0
int main(){
	char arr[]={'a','b','c','d','e','f'};
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof(arr+0));
	printf("%d\n",sizeof(*arr));
	printf("%d\n",sizeof(arr[1]));
	printf("%d\n",sizeof(&arr));
	printf("%d\n",sizeof(&arr[0]+1));
	system("pause");
	return 0;
}
#endif
#if 1
int main(){
	char *c[]={"ENTER","NEW","POINT","FIRST"};
	char **cp[]={c+3,c+2,c+1,c};
	char ***cpp=cp;
	printf("%s\n",**++cpp);
	printf("%s\n",*--*++cpp+3);
	printf("%s\n",*cpp[-2]+3);
	printf("%s\n",cpp[-1][-1]+1);
	system("pause");
	return 0;
}
#endif

#if 0
//�ַ�������������strlen ......
int main(){
	char a[10] = { 'a', 'b', 'c', 'd', 'e' };//��������Ĵ�С֮�����֪������
	char b[] = { 'a', 'b', 'c', 'd', 'e' };//Ҳ���ǲ����ҵ�/0��/0�Ჹ���������û�еĲ���
	char c[] = "123456";
	char str[] = "abc\012abc";//abc\nabc
	char str1[] = "abc\0abc";//abc0abc
	int n, m, z;
	n = strlen(a);//5
	m=strlen(b);//>5
	z=strlen(c);//6
	printf("%d,%d,%d\n",n,m,z);
	n = strlen (str);//7
	m = strlen(str1);//3
	printf("%d,%d\n", n, m);
	system("pause");
	return 0;
}
#endif

#if 0
//strcpy:������ַ����������Ԫ�غ������ һ�� \0��������һ����������
//char *strcpy(char *dest,const char *source)   ��ʽ���ʽ
int main(){
	char a[20] = "12345678";
	char b[20] = "qwer";
	strcpy(a, b);
	printf("%s\n", a);
	system("pause");
	return 0;
}
#endif

#if 0
//strcat:ƴ�Ӻ���
//char *strcat(char *dest, const char *source)
int main(){
	char a[20] = "12345678";
	char b[20] = "qwer";
	strcat(a, b);
	printf("%s\n", a);
	system("pause");
	return 0;
}
#endif

#if 0
//strcmp:�ַ����Ƚϴ�С:�����ַ���������ĸ��ʼ��ASCIIֵ�Ƚϣ�֪���ҵ�����ȵ�Ϊֹ
//int strcmp(const char * string1,const char *string2)
int main(){
	char a[20] = "12345678";
	char b[20] = "qwer";
	int n=strcmp(a, b);
	printf("%d\n",n);
	system("pause");
	return 0;
}
#endif

#if 0
//strtok:���ַ����в��ұ��,����\0��β������ָ�������ǵ�ָ��
int main(){
	char str[]="i,am.a student";
	char sep[]=",. ";
	char *tok=NULL;
	for (tok=strtok(str,sep);tok!=NULL;tok=strtok(NULL,sep)){
		puts(tok);
	}
	system("pause");
	return 0;
}
#endif
#if 0
int main(){

	system("pause");
	return 0;
}
#endif