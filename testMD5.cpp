#include <iostream>
#include <string>
#include "MD5.hpp"

using namespace std;


int main() {
	
	//这是 RFC 1321的标准测试输入和输出， 用来验证此MD5算法的正确性 
	string input[7] = {
	        "",
	        "a",
	        "abc",
	        "message digest",
	        "abcdefghijklmnopqrstuvwxyz",
	        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
	        "12345678901234567890123456789012345678901234567890123456789012345678901234567890"};

    string expect[7] = {
        "d41d8cd98f00b204e9800998ecf8427e", "0cc175b9c0f1b6a831c399e269772661",
        "900150983cd24fb0d6963f7d28e17f72", "f96b697d7cb7938d525a2f31aaf161d0",
        "c3fcd3d76192e4007dfb496cca67e13b", "d174ab98d277d9f5a5611c2c9f419d9f",
        "57edf4a22be3c955ac49da2e2107b67a"};

    for (int i = 0; i < 7; i++) {
        cout << "--------------------------------" << endl;
        cout << "测试 " << i + 1 << ":" << endl;
        cout << "原消息：         " << input[i] << endl;
        cout << "MD5标准输出：    " << expect[i] << endl;
        string digest = getMD5Code(input[i]);
        cout << "MD5输出：        " << digest << endl;
    }
}
