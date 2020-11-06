#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n, i, a = 0, b = 0, c = 0;
	double x;
	cin >> n;
	ifstream ifile;
	ifile.open("c:\\in.txt");


	if (ifile.eof() == 0)
		for (i = 1; i <= n; i++)
		{
			if (ifile.eof() != 0)
			{
				cout << "文件内数据不足" << endl;
				return 0;
			}
			ifile >> x;
			if (x > 0)
				a++;
			if (x == 0)
				b++;
			if (x < 0)
				c++;
		

		}
	cout << "正数个数" << a << "   " << "0个数" << b << "   " << "负数个数" << c << endl;
	ifile.close();
	return 0;
}

