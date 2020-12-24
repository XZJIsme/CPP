#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// ofstream 输出文件流，创建文件并向文件写入信息。
// ifstream 表示输入文件流，用于从文件读取信息。
// fstream 通常表示文件流，同时具 ofstream 和 ifstream 两种功能

int main()
{
    // open() 函数是 fstream、ifstream 和 ofstream 对象的一个成员
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
