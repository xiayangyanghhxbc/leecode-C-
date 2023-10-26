#include <iostream>

class Solution {
public:
    int climbStairs(int n) {
        //初始化三个变量，用于存储不同台阶的方法数
        int p = 0,q = 0,r = 1;

        for (int i = 1; i <= n; ++i) {
            //更新p为前两届台阶的方法数
            p = q;

            //更新q为前一阶台阶的方法数
            q = r;

            //计算当前阶梯的方法数，即前两阶和前一阶的方法数之和
            r = p + q;
        }
        return r;
    }
};

int main() {
    Solution solution;
    int n;

    std::cout << "Enter the number of stairs: ";
    std::cin >> n;

    int ways = solution.climbStairs(n);
    std::cout << "Number of different ways to climb " << n << " stairs: " << ways << std::endl;
    
    return 0;
}