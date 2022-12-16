#include <iostream>
using namespace std;
#include <fstream>
#include <string>
void  test01() {
	ofstream ofs;
	ofs.open("t123.txt", ios::out);
	ofs << "这是新建的文件" << endl;
	ofs << "今天星期五，天气不错，有点寒冷" << endl;
	ofs.close();

}


void test02() {

	ifstream ifs;
	ifs.open("t123.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}
	//第一种读文件
	/*
	char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}
	*/
	//第二种读文件
	/*
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) {
		cout << buf << endl;
	}
	*/
	//第三种
	/*
	string  buf;
	while (getline(ifs,buf)) {
		cout << buf << endl;
	}
	*/
	//第四种

	char c;
	while ((c=ifs.get() )!= EOF) {
		cout << c;
	}
	ifs.close();
}
int main() {

	test02();

	system("pause");
	return 0;
}