#include <iostream>
using namespace std;
#include <fstream>
#include <string>
void  test01() {
	ofstream ofs;
	ofs.open("t123.txt", ios::out);
	ofs << "�����½����ļ�" << endl;
	ofs << "���������壬���������е㺮��" << endl;
	ofs.close();

}


void test02() {

	ifstream ifs;
	ifs.open("t123.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//��һ�ֶ��ļ�
	/*
	char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}
	*/
	//�ڶ��ֶ��ļ�
	/*
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) {
		cout << buf << endl;
	}
	*/
	//������
	/*
	string  buf;
	while (getline(ifs,buf)) {
		cout << buf << endl;
	}
	*/
	//������

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