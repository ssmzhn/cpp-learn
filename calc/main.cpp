#include <iostream>
using namespace std;

void san();
void si();
void circle();
void cube();
void yuanzhu();
void gougu();

int main()
{
	int sel;
	cout << "1: 三角形相关数据计算;2: 长方形相关数据计算;3: 圆相关数据计算;4: 长方体相关数据计算;5: 圆柱体相关数据计算;6: 勾股定理计算器" << endl << "请输入序号进行选择: ";
	cin >> sel;
	switch(sel)
	{
		case 1:
			san();
		case 2:
			si();
		case 3:
			circle();
		case 4:
			cube();
		case 5:
			yuanzhu();
		case 6:
			gougu();
		default:
			cout << "nmsl";
			break;
	}
	return 0;
}

void san()
{
	int a,b,c,s,c,input;
	cout << "计算: 1: 面积;2: 周长" << endl << "输入序号选择: ";
	cin >> input;
	switch (input)
	{
	case 1:
		cout << "输入两个边的长度: ";
		cin >> a >> b;
		s = a*b/2;
		cout << "答案为:" << s << endl;
		break;
	case 2:
		cout << "输入三个边的长度: ";
		cin >> a >> b >> c;
		c = a+b+c;
		cout << "答案为:" << c << endl;
		break;
	default:
		cout << "输入错误！";
		break;
	}
}

void si()
{
	int a,b,c,d,s,c,input;
	cout << "计算: 1: 面积"
}

void circle()
{

}

void cube()
{

}

void yuanzhu()
{

}

void gougu()
{

}