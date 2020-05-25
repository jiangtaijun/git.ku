#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<string>
#include<string.h>
#include<cstring>
using namespace std;
int main1(int);
int test1(void);
const int Months = 12;


int main1(int)
{
	cout << "jiangtaijun" << "四川" << endl;
	return 0;
}
int test1(void)
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;
	cout << hex;
	cout << chest << endl;
	cout << oct;
	cout << chest << endl;
	cout << dec;
	cout << chest << endl;
	return 0;
}
int test2(void)
{
	int a = 0;
	cout << "7+3=" << 7 + 3 << endl;
	cout << "7-3=" << 7 - 3 << endl;
	cout << "7*3=" << 7 * 3 << endl;
	cout << "7/3=" << 7 / 3 << endl;
	cout << "7.0/3.0=" << 7.0 / 3.0 << endl;
	cout << "7%3=" << 7 % 3 << endl;
	cout << "7+3*5=" << 7 + 3 * 5 << endl;
	cout << "(7+3)*5=" << (7 + 3) * 5 << endl;
	cout << "请输入你的年龄" << ":" << endl;
	cin >> a;
	cout << "你已经出生了" << a * 12 << "个月了" << endl;
	a=test1();
	return 0;
}
int test_char(int) 
{
	char ch = 0;
	cout << "Enter a char:" << endl;
	cin >> ch;
	cout << "Hola !";
	cout << "Thank you for zhe " << ch << " character." << endl;
	return 0;

}
void test_put()
{
	char put1 = 66;
	cout.put(put1);
}
void test_fioatnum()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0f / 3.0f;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;
	cout << "tub = " << tub << endl;
	cout << "A million tubs = " << tub * million << endl;
	cout << "And ten million tubs = " << 10 * tub * million << endl;
	cout << "mint = " << mint << endl;
	cout << "One minllion mint = " << mint * million << endl;
	
}
void test_float_add()
{
	float a1 = 3.45E+22f;
	float b1 = a1 + 1.0f;

	cout << "a1 = " << a1 << endl;
	cout << "b1-a1=" << b1 - a1 << endl;
}
void test_AtoneToPounds()
{
	const int Lbs_per_atn = 14;
	int lbs;
	cout << "请输入你有多少英石：" << endl;
	cin >> lbs;
	int atone = lbs / Lbs_per_atn;
	int pounds = lbs % Lbs_per_atn;
	cout << lbs << " pounds are " << atone << " atone " << pounds << " pounds/n";

}
void test_typecast(void)
{
	int auks, bats, coots;
	auks =(int)( 19.99 + 11.99);
	bats = (int)19.99 + (int)11.99;
	coots = int(19.99) + int(11.99);
	cout << "akus = " << auks << endl;
	cout << "bats = " << bats << endl;
	cout << "cooks = " << coots << endl;
	char ch = 'Z';
	cout << "The code for z is " << (int)ch<< endl;
	cout << "Yes,zhe code is " << static_cast<int>(ch) << endl;

}
void test_rarray(void)
{
	int yams[3];
	yams[0] = 12;
	yams[1] = 2;
	yams[2] = 13;
	int yumcosts[3] = { 12,3,2 };
	cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
	cout << "\nsizs of yams array " << sizeof yams << " bytes.\n";
	cout << "\nSize of zhe element = " << sizeof yams[1] << "byte\n";
	
}
void test_getline(void)
{
	char name[20];
	char name2[20];
	cout << "请输入两行字符：" << endl;
	cin.getline(name, 20);
	cin.getline(name2, 20);
	cout << "name is:" << name << endl;
	cout << "name2 is:" << name2 << endl;


}
int change_abc()
{
	int a, b, c,t;
	printf("Please input a,b,c:\n");
	cin >> a >> b >> c;
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("The oder of the number is:\n");
	cout << a<<"<"  << b << "<" << c;
	
	return 0;
}
void chengfabiao()
{
	int i=0,j=0;
	for (i = 1; i <= 9;i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << i << "*" << j << "=" << i * j<<"  ";
		}
		cout << endl;
	}
}
void dayingxingxing()
{
	int i, j, k,m=4;
	for (i = 0; i < 4; i++,m--)
	{
		for (j = 0; j < m; j++)
			cout << " ";
		for (k = 0; k < 2 * i + 1; k++)
			cout << "*";
		cout << endl;
	}
	for (i = 2,m=2; m < 5; i--, m++)
	{
		for (j = 0; j < m; j++)
			cout << " ";
		for (k = 0; k < 2 * i + 1; k++)
			cout << "*";
		cout << endl;
	}
}
void test_string()
{
	string s1 = "abcde";
	string s2, s3;
	s2 = s1;
	cout << "s2:" << s2<<endl;
	s2 = "fghijk";
	s3 = s1 + s2;
	cout << "s3=" << s3 << endl;
	s2 += s1;
	cout << "s2:" << s2 << endl;
	s3 += "mnopqrst";
	cout << "s3=" << s3 << endl;
}
void test_string_io()
{
	char charr[20]="a";
	string str1;
	cout << strlen(charr) << endl;
	cout << str1.size() << endl;
	cin.getline(charr, 20);
	getline(cin, str1);
	cout<< strlen(charr) << endl;
	cout << str1.size() << endl;
	cout << charr << endl;
	cout << str1 << endl;
}
int hello_world()
{
	printf("HELLO,WORLD!\n");
	return 0;
}
int num_two()
{
	int a=0, b=0, sum=0;
	printf("Please input two number:\n");
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("%d+%d=%d", a, b, sum);
	return 0;
}
int change_a()
{
	int price=0,amount=100;
	printf("请输入金额（元）：\n");
	scanf("%d", &price);

	printf("请输入票面：\n");
	scanf("%d", &amount);


	int change = amount - price;
	printf("找您%d元\n", change);
	return change;
	
}
int plus_c()
{
	int a=0, b=0;
	printf("请输出两个整数：");
	scanf("%d%d", &a, &b);
	printf("%d+%d=%d\n", a, b, a + b);
	return 0;
}
int more_height()
{
	printf("请分别输入身高的英尺和英寸，如输出 5 7)表示5英尺7英寸：");
	double foot, inch;
	scanf("%lf %lf", & foot, &inch);
	printf("身高是%f米。\n", ((foot + inch / 12) * 0.3048));
	return 0;


}
int lixi()
{
		int x = 0;
		scanf("%d", &x);
		double amount = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);
		printf("%f", amount);
		return 0;

}
int change_5()
{
	//初始化
	int price = 0, bill = 0;
	//读入金额和票面
	printf("请输入金额（元）：\n");
	scanf("%d", &price);
	printf("请输入票面：\n");
	scanf("%d", &bill);
	//计算找零
	if (bill >= price)
	{
		printf("找您%d元\n", bill - price);
	}
	else
	{
		printf("您的钱不够\n");

	}
	
	return 0;

}
int test_switch_case()
{
	int type = 0;
	scanf("%d", &type);
	switch (type)
	{
	case 1:
		printf("你好\n");
		break;
	case 2:
		printf("早上好\n");
		break;
	case 3:
		printf("晚上好\n");
		break;
	case 4:
		printf("再见\n");
		break;
	default:
		printf("什么鬼啊\n");
		break;
	}
	return 0;
}
int dayinzhenshuweishu1()
{
	int t=0,a=0;
	scanf("%d", &a);
	for (a; a > 0; a=a / 10)
	{
		++t;
	}
	printf("%d", t);
	return 0;
}
int dayinzhenshuweishu2()
{
	int t = 0, a = 0;
	scanf("%d", &a);
	t++;
	a /= 10;
	while (a > 0)
	{
		t++;
		a /= 10;
	}
	printf("%d", t);
	return 0;
}
int caishuzi()
{
	int a=0, b=0,count=0;
	//程序生成任意整数a
	srand(time(0));
	a = rand();
	a = a % 100;
	//printf("%d\n", a);
	
	
	do 
	{
		count++;
		//录入猜想数b
		printf("请输入猜想数\n");
		scanf("%d", &b);
		if (a == b)
			printf("您猜对了\n");
		else
			if (a > b)
				printf("您猜的数小了\n");
			else
				printf("您猜的数大了\n");
	} while (a != b);
	printf("您猜了%d\n", count);
	printf("您猜中了是%d", a);
	
	return 0;


}
int qiupingjunshu()
{
	int a = 0, mun = 0,i=0;
	double e=0;
	do 
	{
		printf("请输入数字\n");
		scanf("%d", &a);
		if (a != -1)
		{
			e = e + a;
			i++;
		}	
	} while (a != -1);
	printf("输入数字的平均数是%lf\n", e / i);
	return 0;

}
int one_two_five()
{
	int x = 0;
	int one, two, five;
	scanf("%d", &x);
	for (one=1; one < x * 10; one++)
	{
		for (two = 1; two < x * 10 / 2; two++)
		{
			for (five=1; five < x * 10 / 5; five++)
				if(one+two*2+five*5==x*10)printf("可以用%d个一角加%d个两角加%d个五角组成%d元\n", one, two, five,x);
		}
	}
	return 0;
}
int qian_N_he()
{
	int x, n = 0 ;
	double a=0;
	int sign=1;
	scanf("%d", &n);
	for(x=1;x<=n;x++)
	{
		a = a + sign*1.0 / x;
		printf("1/%d", x);
		sign = -sign;
		if (x == n)
			printf("=");
		else if (x % 2 == 0) printf("+");
		else printf("-");
		
	}
	printf("%f\n", a);
	return 0;
}
int must()
{
	int x=10;
	int mask = 1;
	int t=x;
	while (x >= 10)
	{
		x /= 10;
		mask *= 10;
	}
	// printf("%d\n", mask);
	x = t;
	do {
		int d = x / mask;
		
		printf("%d", d);
		if (mask>= 10)printf(" ");
		x = x % mask;
		mask = mask / 10;
		
	} while (mask> 0);
	return 0;
}
int zhui_da_gong_yue_shu()
{
	int a = 12, b = 18, min = 0;
	int x = 0;
	min = a;
	if (a >= b)min = b;
	//scanf("%d%d", &a ,& b);
	for (int i = min; i >0; i--)
	{
		if (a % i == 0) 
		{
			if (b % i == 0)
			{
				int x = 1;
				printf("%d与%d的最大公约数是%d\n", a, b, i);
				if (x == 1) { break; }
			}	
			}
	}
	return 0;
}
int zhanzhuanxiangchu()
{
	int a, b, t;
	scanf("%d %d", &a, &b);
	do
	{
		t = a % b;
		a = b;
		b = t;
	} while (b != 0);
	printf("gct=%d", a);
	return 0;
}
int san_shu_pai_lie()
{
	int a = 2;
	int x = 2;
	int cnt = 0;

	for (int i = a; i <= a + 3; i++)
	{
		for (int j = a; j <= a + 3; j++)
		{
			for (int k = a; k <= a + 3; k++)
			{
				if (i != j) {
					if (j != k) {
						cnt++;
						printf("%d%d%d", i, j, k);
						if (cnt == 6) {
							printf("\n");
							cnt = 0;
						}
						else {
							printf(" ");
							
						}
					}
				}
			}
		}
	}

	return 0;
}
int shui_xian_hua_shu()
{
	int n;
	scanf("%d", & n);
	int m = n;
	int a=0,mun=0;
	int t;
	int cnt = 0; 
	int i=0, j=0, k=1;
	int mask=1;
	do {
		mask = 10 * mask;
		n--;
	} while (n > 0);
	//printf("%d\n", mask);
	mun = t = mask;

	while (mask > mun/ 10)
	{
		mask--;
		t = mask;
		do 
		{
			i = t % 10;
			t = t / 10;
			for (int a = 0; a < m; a++)
			{
				k = k * i;
			}
			j = j + k;
			k = 1;
		} while (t > 0);
		//printf("%d %d\n", j, mask);
		if (j == mask)
		{
			printf("%d\n", mask);
		}
		j = 0;
		
	}
	//printf("%d", mask);

	return 0;
}
int shui_xian_hua_shu2()
{
	int n;
	scanf("%d", &n);
	int m = n;
	int mask = 1;
	do {
		mask = 10 * mask;
		m--;
	} while (m > 1);
	//printf("%d\n", mask);
	int mun = mask;
	while (mask < mun * 10)
	{
		
		int t,j=0;
		t = mask;
		do
		{
			int i = 0 , k = 1;
			i = t % 10;
			t = t / 10;
			for (int a = 0; a < n; a++)
			{
				k = k * i;
			}
			j = j + k;
		} while (t > 0);
		//printf("%d %d\n", j, mask);

		if (j == mask)
		{
			printf("%d\n", mask);
		}
		mask++;
	}
	//printf("%d", mask);

	return 0;
}
int jiu_jiu_shen_fa_biao()
{
	//int a;
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d",j,i,i*j);
			if (i * j < 10)
			{
				printf("   ");
			}
			else printf("  ");
			if (j == i)printf("\n");
		}
	}



return 0;
}
int test_shu_zhu()
{
	const int munber = 10;
	int x=0;
	int count[munber];
	int i = 0;

	/*while (i < munber)
	{
		count[i] = 0;
		i++;
	}*/
	for (i = 0; i < 10;i++ )
	{
		count[i] = 0;
		printf("%d:%d\n", i,count[i]);
		
	}
	scanf("%d", &x);
	while (x != -1)
	{
		if (x <= 9 && x >= 0) {
			count[x]++;
		}
		scanf("%d", &x);
	}
	for(i=0;i<munber;i++)
		{
		printf("%d:%d\n", i, count[i]);
		}
	return 0;
}

void cheer(int i)
{
	printf("cherr %d", i);
	

}
void jian_cha_x_o()
{

	const int size = 3;
	int board[size][size];
	int i, j;
	int numofx;
	int numofo;
	int result = -1;//-1:没人赢，1：x赢，0：o赢
	//读入矩阵
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	//检查行
	for (i = 0; i < size && result == -1; i++) {
		numofo = numofx = 0;
		for (j = 0; j < size; j++) {
			if (board[i][j] == 1) {
				numofx++;
			}
			else { numofo++; }
		}
		if (numofo == size) {
			result = 0;
		}
		else if (numofx == size) {
			result = 1;
		}
	}
	//检查列
	if (result == -1) {
		for (j = 0; j < size && result == -1; j++) {
			numofo = numofx = 0;
			for (i = 0; i < size; i++) {
				if (board[i][j] == 1) {
					numofx++;
				}
				else { numofo++; }
			}
			if (numofx == size) {
				result = 1;
			}
			else if (numofo == size) {
				result = 0;
			}
		}
	}
	//正对角线
	if (result == -1) {
		numofo = numofx = 0;
		for (i = 0; i < size; i++) {
			if (board[i][i] == 1) {
				numofx++;
			}
			else {
				numofo++;
			}
		}
		if (numofx == size) {
			result = 1;
		}
		else if (numofo == size) {
			result = 0;
		}
	}
	//反对角线
	if (result == -1) {
		numofo = numofx = 0;
		for (i = 0; i < size; i++) {
			if (board[i][size - i - 1] == 1) {
				numofx++;
			}
			else {
				numofo++;
			}
		}
		if (numofx == size) {
			result = 1;
		}
		else if (numofo == size) {
			result = 0;
		}
	}
	if (result == 1) {
		printf("胜利者为 X \n");
	}
	else if (result == 0) {
		printf("胜利者为 O \n");
	}
	else if (result == -1) {
		printf("和棋 \n");
	}
}
int mylen(const char* s) {
	int idx = 0;
	while (s[idx] != 0) {
		idx++;
	}
	return idx;
}

int main(int)							
	//{
	//	cout << "Game Over" << endl;
	//	return 0;
	//11
	//}			
{
	//int c ='a';
	// a = main1(a);
	// c = test_char(c);
	// test_char(c);
	// test_put();
	// test_fioatnum();
	// test_float_add();
	// test_AtoneToPounds();
	// test_typecast();
	//test_rarray();
	//test_getline();
	//change_abc();
	//chengfabiao();
	//dayingxingxing();
	//test_string();
	//test_string_io();
	//hello_world();
	//num_two();
	//change_a();
	//plus_c();
	//more_height();
	//lixi();
	//change_5();
	//test_switch_case();
	//dayinzhenshuweishu2();
	//caishuzi();
	//qiupingjunshu();
	//one_two_five();
	//qian_N_he();
	// must();
	//zhui_da_gong_yue_shu();
	//zhanzhuanxiangchu();
	//san_shu_pai_lie();
	//shui_xian_hua_shu2();
	 //jiu_jiu_shen_fa_biao();
	// printf("123\t456\n");
	// printf("12\t456\n");
	// cheer(2.4);
	//test_shu_zhu();
	//jian_cha_x_o();
	/*int i = 0;
	int* p = &i;
	printf("%p\n", &i);
	//////printf("%p\n", p);
	*p = 10;
	printf("%p\n", &i);
	printf("%d\n", *p);
	printf("%d\n", i);
	*/
	//void* p;
	//int cnt=0;
	//while (p = malloc(100 * 1024 * 1024)) {
	//	cnt++;
	//}
	//printf("%d00M空间\n", cnt);
	//free(p);
	//char word[8];
	//char word2[8];
	//scanf("%7s", word);
	//scanf("%7s", word2);
	//printf("%s##\n", word);
	//printf("%s##\n", word2);
	/*int ch;
	while ((ch = getchar()) != EOF) {
		putchar(ch);

	}
	printf("EOF\n");*/
	char line[] = "hello";

	printf("strlen=%lu\n", strlen(line));
	printf("sizeof=%lu\n", sizeof(line));
	printf("strmylen=%lu\n", mylen(line));

	return 0;
	
}
