#include <iostream>

//计算一个整数中能整除该整数的数位的数目
class Solution {
private:
    int res;
    int originalNum;

public :
    //构造函数,进行赋值
    Solution(int num) : originalNum(num){
        res = 0;
    }

    int coutDigirs(int num) {
        int t = num ,res = 0;
        // res 用于存储符合条件的数位的数量，初始值为 0。
        // t 循环遍历整数的每一位数字
        while (t)
        {
            //t % 10：获取整数t的最后一位数字
            if (num % (t % 10) == 0) {
                //t能整除originalNum,则增加计数
                res += 1;
            }
            //移动到下一位
            t /= 10;
        }
        return res;
    }
};

int main(){
    int num;
    std::cout << "请输入一个整数：";
    std::cin >> num;

    Solution solution(num);
    int result = solution.coutDigirs(num);
    
    std::cout << "能整除该整数的数位数目为：" << result << std::endl;
    return 0;

}