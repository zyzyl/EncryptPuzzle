//
//  jiyaxin.cpp
//  jiyaxin
//
//  Created by 鑫鑫之火 on 2018/11/17.
//  Copyright © 2018年 鑫鑫之火. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Z;
    int i;
    cout << "这是原码:" ;
    getline(cin,Z);     //输入字符
    int n;               //输入移动位数
    cout << endl<<"使字母移动n位:" ;
    cin >> n;
    cout << "输出译码" << endl;
    for(i = 0 ; i < Z.length() ; i++)
    {
        if((Z[i]>=65&&Z[i]<=90)||(Z[i]>=97&&Z[i]<=122))
        {
            if((Z[i]+n)>'Z')
            {
                if (Z[i]>='a')
                {
                    if ((Z[i]+n)>'z')
                    {
                        if( (((Z[i]+n)-'z')%26==0))
                        {
                            Z[i]='z';
                        }
                        else Z[i]=(96+((((Z[i]+n)-'z')%26)));
                    }
                    else Z[i]=(Z[i]+n);
                }
                else   if((((Z[i]+n)-'Z')%26==0))
                {
                    Z[i]='Z';
                }
                else  Z[i]=(64+((((Z[i]+n)-'Z')%26)));
            }
            else Z[i]=Z[i]+n;
        }
        else Z[i]=Z[i];
    }
    
    cout <<Z<< endl;
    return 0;
}
