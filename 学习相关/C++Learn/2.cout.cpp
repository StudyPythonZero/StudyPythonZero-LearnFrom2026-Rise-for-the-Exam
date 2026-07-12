#include "iostream" // 导入 iostream 模块
using namespace std; // 使用 std 命名库

/* 
 * 本程序的功能为：
 * - 在屏幕输出特定信息
 * */
int main() // 主函数
{
	// 在屏幕输出 Hello, World!
	cout << "Hello, World!" << endl;
	// 在屏幕输出 I love C++
	cout << "I love C++" << endl;
	// 在屏幕输出 10
	cout << 10 << endl;
	// 下面的代码，完成了将多份内容合并输出的功能
	// 在屏幕输出 I an 10 years old.
	cout << "I an 10 " << "years old." << endl;
	// 在屏幕输出 If you want to learn IT, come to itheima.
	cout << "If you want to learn IT, " << "come to itheima." << endl;

	return 0;
}