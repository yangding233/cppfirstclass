// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "helloworld" << endl;
//
//     system("pause");
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     cout << "a = " << a << endl;

//     system("pause");
//     return 0;
// }



// #include<iostream>
// using namespace std;

// //1.单精度 float
// //2.双精度 double
// int main()
// {
//     float f1 = 3.14f;//一开始系统会默认小数为双精度
//     double f2 = 3.14;

//     system("pause");
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     //换行符\n
//     cout << "hello world\n";
//     //反斜杠 \\(打印出一个\)
    
//     cout << "\\" << endl;

//     //水平制表符\t(可以方便对齐)

//     cout << "aaaa\thelloworld" << endl;
//     cout << "aa\thelloworld" << endl;
//     cout << "aaaaa\thelloworld" << endl;

//     system("pause");
//     return 0;
// }
///////////////////字符串////////////////////
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     //C风格字符串
//     char std[] = "hello world";
//     //C++风格字符串
//     string str2 = "hello world";
//     cout<<str2<<endl;
//     system("pause");
//     return 0;

// }
//////////////////////////bools数据类型/////////////////
// #include<string>
// #include<iostream>
// using namespace std;
// int main()
// {
//     bool flag = true;
//     cout << flag << endl;
//     bool flag = false;
//     cout << flag << endl;

//     system("pause");
//     return 0;
// }

///////////////数据的输入//////////////////

// #include<string>
// #include<iostream>
// using namespace std;
// int main()
// {
//     //1.整形
//     int a = 0;
//     cout << "请给这个整型变量i赋值" << endl;
//     cin >> a;
//     cout << "整型变量a =" << a << endl;
//     //2.浮点型
//     float f = 0;
//     cout << "请给这个整型变量f赋值" << endl;
//     cin >> f;
//     cout << "浮点型变量f =" << f << endl;
//     //3.字符型
//     char c = 'a';
//     cout << "请给这个字符型变量c赋值" << endl;
//     cin >> c;
//     cout << "字符型变量c =" << c << endl;
//     //4.字符串型
//     string str = "hello";
//     cout << "请给字符串str赋值" << endl;
//     cin >> str;
//     cout << "字符串str =" << str << endl;
//     //5.布尔类型
//     bool flag = false;
//     cout << "请给布尔型flag赋值" << endl;
//     cin >> flag;
//     cout  << "flag =" << flag << endl;

//     system("pause");
//     return 0;
// }


////////////随机数生成/////////////
// #include<string>
// #include<iostream>
// using namespace std;
// #include<ctime>
// int main()
// {
//     srand((unsigned int)time(NULL));
//     int num = rand() % 100 + 1;//这里生成的是1~100的随机数
//     cout << num << endl; 
    
    
//     system("pause");
//     return 0;
// }
////////////////goto跳转语法////////

// #include<string>
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "the first" << endl;
//     cout << "the second" << endl;
//     goto FLAG;
//     cout << "the third" << endl;
//     cout << "the forth" << endl;
//     FLAG :
//     cout << "the fifth" << endl;

    
//     system("pause");
//     return 0;
// }
//////////////////////////////////冒泡排序/////////////////////////////////
// #include<string>
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num = 0;
//     int flag = 0;
//     int arr[8] = {9,6,7,8,2,3,4,1};

//     for (int i = 0; i < 8 - 1; i++)
//     {
//         for (int j = 0; j < 8 - i - 1; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 flag = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = flag;
//             }
//         }
        
//     }
//     for (size_t f = 0; f < 8; f++)
//     {
//         cout << arr[f] << " ";
//     }
//     system("pause");
//     return 0;
// }
/////////////////////////二维数组定义///////////////
#include<string>
#include<iostream>
using namespace std;
int main()
{
    //arr[行][列]
    ///第一种
    int arr1[2][3];
    //第二种
    int arr2[2][3]=
{
    {1,2,3},
    {4,5,6}
};
    //第三种(系统能分)
    int arr3[2][3]={1,2,3,4,5,6};
    //第四种(系统能分)
    int arr4[][3] = {1,2,3,4,5,6};


    system("pause");
    return 0;
}

















