class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem,sum=0,product=1;
        while(n!=0){
            rem=n%10;
            product=product*rem;
            sum=sum+rem;
            n/=10;
        }
        return product-sum;
        return 0;
    }
};