#include <iostream>
using namespace std;
int main()
{   
    int n;														//定义变量类型 
	char i;														//定义变量类型
	cin>>n;                                                     //输入变换的位数 
	while(cin.get(i))                                           //进行输入循环 
	{
		if ((i>='a'&&i<='z')||(i>='A'&&i<='Z'))                 //确定对象为字母 
		    {
		    	if(i<'z'-n+1||i<'Z'-n+1){i=i+n;cout<<i;}        //准确确定范围并进行转换 
		    	else{i=i+n-26;cout<<i;}                         //准确确定范围并进行转换
		    }
		else cout<<i;	                                        //原样输出其他字符 
	}
return 0;
}
