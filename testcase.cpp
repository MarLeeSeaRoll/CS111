#include <iostream>
#include <limits>

const int CAPACITY = 400; // 定义数组容量

int main()
{
    int size = 0;
    double stuMarks[CAPACITY]; // 声明成绩数组
    double data;

    std::cout << "Please input student mark or press q to quit" << std::endl;

    while (size < CAPACITY)
    {
        std::cout << "Enter mark for student " << (size + 1) << ": ";

        if (!(std::cin >> data))
        {                     // 检查输入是否为有效的数字
            std::cin.clear(); // 清除错误状态
            std::string temp;
            std::cin >> temp; // 读取非数字输入

            if (temp == "q" || temp == "Q")
            {
                break; // 用户选择退出
            }
            else
            {
                std::cout << "Invalid input. Please enter a valid number." << std::endl;
                continue;
            }
        }

        if (data < 0 || data > 100)
        { // 验证成绩范围
            std::cout << "Invalid mark. Please enter a number between 0 and 100." << std::endl;
            continue;
        }

        stuMarks[size++] = data; // 将有效成绩存储到数组中
    }

    // 输出存储的成绩以验证
    std::cout << "You have entered the following marks:" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Student " << (i + 1) << ": " << stuMarks[i] << std::endl;
    }

    return 0;
}
