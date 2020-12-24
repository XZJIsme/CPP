#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// ofstream ����ļ����������ļ������ļ�д����Ϣ��
// ifstream ��ʾ�����ļ��������ڴ��ļ���ȡ��Ϣ��
// fstream ͨ����ʾ�ļ�����ͬʱ�� ofstream �� ifstream ���ֹ���

int main()
{
    // open() ������ fstream��ifstream �� ofstream �����һ����Ա
    ofstream outfile;
    outfile.open("test_out", ios::out | ios::trunc);
    outfile << setw(50) << internal << "hello!!! !!!" << endl;
    outfile.close();

    ifstream infile;
    infile.open("test_out");

    infile.close();
    infile.open("test_out");

    cout << "return 0" << endl;
    cout<<showpos<<3<<3<<endl<<hex <<uppercase<<1010<<endl;
    cout<<3<<endl;
    cout<<1010<<endl;
    return 0;
}
