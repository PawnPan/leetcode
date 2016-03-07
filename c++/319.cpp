class Solution {
public:
    int bulbSwitch(int n) {
        return (int)sqrt(n);
    }
};
/*
 * 每个灯操作偶数次之后最终灯灭，操作奇数次之后最终灯亮。
 * 每个灯的操作次数为该数的因子个数。
 * 只有完全平方数有奇数个因子。
 */ 
