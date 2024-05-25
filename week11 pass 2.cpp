#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int CAPACITY = 50;
    string query;
    string name[CAPACITY] = {
        "James", "John", "Robert", "Michael", "William",
        "David", "Richard", "Joseph", "Charles", "Thomas",
        "Christopher", "Daniel", "Matthew", "Anthony", "Mark",
        "Donald", "Steven", "Paul", "Andrew", "Joshua",
        "Kenneth", "Kevin", "Brian", "George", "Edward",
        "Mary", "Patricia", "Jennifer", "Linda", "Elizabeth",
        "Barbara", "Susan", "Jessica", "Sarah", "Karen",
        "Nancy", "Lisa", "Margaret", "Betty", "Sandra",
        "Ashley", "Dorothy", "Kimberly", "Emily", "Donna",
        "Michelle", "Carol", "Amanda", "Melissa", "Deborah"};

    cout << "Enter a name, or press q to exit" << endl;

    while (true)
    {
        cin >> query; // 读取用户输入
        if (query == "q")
        { // 检查是否输入 'q'，是则退出循环
            break;
        }

        bool found = false; // 初始化未找到标志
        for (int position = 0; position < CAPACITY; position++)
        {
            if (query == name[position])
            {
                cout << "The name is in the database, it's the " << position << "th data in our database." << endl;
                found = true;
                break; // 找到名字后退出循环
            }
        }

        if (!found)
        {
            cout << "We can't find this name in our database" << endl;
        }
    }

    cout << "Thank you for using" << endl;
    return 0;
}