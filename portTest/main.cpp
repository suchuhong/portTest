#include "SerialPort.h" 
#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
	//���崫������
	char open[3] = { 'o','\r','\n' };
	char close[3] = { 'r','\r','\n' };
	//��ʼ����ʵ��
	CSerialPort port;
	if (port.InitPort(3)) {//��ʼ��com3  3����com3 4����com4����ͨ���豸�������鿴
	//��������
		port.WriteData(open, 3);
		port.WriteData(close, 3);
	}
	else {
		cout << "open port fail" << endl;
	}
	getchar();
	return 0;
}