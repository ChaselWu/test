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
				cout << "�ļ������ݲ���" << endl;
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
	cout << "��������" << a << "   " << "0����" << b << "   " << "��������" << c << endl;
	ifile.close();
	return 0;
}

