#include "SerialPort.h" 
#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
	//定义传输数组
	char open[3] = { 'o','\r','\n' };
	char close[3] = { 'r','\r','\n' };
	//初始化类实例
	CSerialPort port;
	if (port.InitPort(3)) {//初始化com3  3代表com3 4代表com4，可通过设备管理器查看
	//发送数据
		port.WriteData(open, 3);
		port.WriteData(close, 3);
	}
	else {
		cout << "open port fail" << endl;
	}
	getchar();
	return 0;
}