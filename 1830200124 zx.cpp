#include <iostream>
using namespace std;
int main()
{   
    int n;														//����������� 
	char i;														//�����������
	cin>>n;                                                     //����任��λ�� 
	while(cin.get(i))                                           //��������ѭ�� 
	{
		if ((i>='a'&&i<='z')||(i>='A'&&i<='Z'))                 //ȷ������Ϊ��ĸ 
		    {
		    	if(i<'z'-n+1||i<'Z'-n+1){i=i+n;cout<<i;}        //׼ȷȷ����Χ������ת�� 
		    	else{i=i+n-26;cout<<i;}                         //׼ȷȷ����Χ������ת��
		    }
		else cout<<i;	                                        //ԭ����������ַ� 
	}
return 0;
}
