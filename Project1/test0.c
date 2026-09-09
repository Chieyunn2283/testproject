#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS 1
#endif 

#include <stdio.h>

int main(void)
{
	printf("Hello, World!\n");

	//F10调试
	// 数组：一组相同类型的元素
	//占位符%d
	printf("%d\n", 100);
	printf("%d\n%d\n", 200, 300);
	//%d的作用相当于一个填空题的横线，将后面的数字填进去，请看(占位符这个名字很生动）
	printf("Today is %d.%d", 9, 8);
	// 因而必须数量一样
	//printf("%d %d",100);
	//printf("%d",100,200);
	//另%.d用于补零如printf（"%.2d",1)输出01，默认不补

	//占位符%f (前者float，%lf用于double，不再赘述）
	//用于浮点数
	//有%.f的用法，数字代表保留多少位小数，默认为6

	//占位符%g
	//用于约去多余数字
	//例 4.0输出4 例3.50输出3.5
	//有%.g的用法，数字表示保留多少有效数字，默认为6

	//占位符%c
	//用于单个字符

	//占位符%s
	//用于字符串，但是需传字符数组名或char*指针
	//有%.s的用法，数字表示打印从左往右数几个数字，不够则右对齐

	//sizeof()
	//sizeof()表示计算类型或空间所占空间大小，单位是字节
	//1 byte = 8 bit,1 kb = 1024 byte,1 mb = 1024 kb,1 gb = 1024 kb,1 tb = 1024 gb,1 pb = 1024 tb

	//变量
	//类型 变量名=？
	//有全局变量和局部变量之分，前者在{ }之外，后者在{ }之内
	//如果全局变量和局部变量名字冲突，那么局部优先
	//局部变量作用域即变量所在的局部范围
	//全局变量作用域即变量之后的整个工程
	//全局变量跨文件引用时需声明，例:extern int g_val
	//变量的生命周期
	//局部变量从进入局部范围到出局部范围
	//全局变量是整个程序
	printf("\n");
	int age = 18;
	printf("%d\n", age);
	age = age + 1;
	printf("%d\n", age);
	double weight = 65.3;
	printf("%f\n", weight);
	printf("%g\n", weight);

	//一元运算符：取地址符&

	//输入函数scanf()
	//使用时需在第一行写入#define _CRT_SECURE_NO_WARNINGS 1
	int a1 = 0;
	int a2 = 0;
	//scanf("%d %d", &a1, &a2);
	int a_sum = 0;
	a_sum = a1 + a2;
	printf("sum = %d\n", a_sum);
	//为后续测试方便，现在scanf前加入//以取消作用

	//常量
	//字面变量
	// const修饰的常变量 例：const int num = 0
	// #define定义的标识符常量
	//枚举常量 例：(enum _ {}是枚举，enum _是枚举类型,枚举常量间用,隔开)
	enum SEX
	{
		male,
		female,
		secret
	};
	//那么之后enum SEX 变量名 的赋值只能在这三者间选择，例：
	enum SEX my_sex = male;//注意，仅定义时需带上enum _
	//enum以整型形式储存
	printf("%d\n",male);
	printf("%d\n", my_sex);
	//其值默认从零开始依次加一，但在定义时可以赋值，未赋值则默认前一位加一，例：
	enum SEX_
	{
		male_ = 7,
		female_ 
	};
	printf("%d\n", female_);
	//enum是一组固定整型常量，而struct是打包多个变量

	//字符串—数据，字符数组—容器，
	// 字符串需以\0结尾，其中\0表示结束字符
	//' '代表单个字符常量，类型是char
	// " "代表字符串（字符数组，末尾自带\0,且\0在strlen不计入长度)类型是char*
	char b1[] = "abc";
	printf("%s\n", b1);
	char b2[] = { 'a','b','c','\0'};
	printf("%s\n", b2);

	//strlen求字符串长度,测字符串时直接填入，(不计\0)，例：
	printf("%d\n", strlen(b1));
	printf("%d\n", strlen(b2));

	//然而sizeof会计入\0，包括自动补充的
	printf("%d\n", sizeof(b1));
	printf("%d\n", sizeof(b2));


	return 0;
}