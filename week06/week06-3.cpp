//week06-3.cpp
//leetcode 1780
//�D�جݦ����A���{����²��A�u�nwhile(�j��) if(�P�_)
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){//�u�nn�٦��Ʀr�A�N��֡A�鱼3������
        //n%3��2���n
            if(n%3==2) return false;
            n = n / 3;
        }
        return true;
    }
};
