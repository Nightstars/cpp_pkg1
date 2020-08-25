// cpp_pkg1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    void setName(string _name) {
        m_strName = _name;
    }
    string getName() {
        return m_strName;
    }
    void setGender(string _gender) {
        m_strGender = _gender;
    }
    string getGender() {
        return m_strGender;
    }
    int getScore() {
        return m_iScore;
    }
    void initScore() {
        m_iScore = 0;
    }
    void study(int _score){
        m_iScore += _score;
    }
private:
    string m_strName;
    string m_strGender;
    int m_iScore;
};
int main()
{
    Student stu;
    stu.initScore();
    stu.setName("zhangsan");
    stu.setGender("女");
    stu.study(5);
    stu.study(3);

    cout << stu.getName()<<"\t" <<stu.getGender()<<"\t"<<stu.getScore()<< endl;
    system("pause");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
