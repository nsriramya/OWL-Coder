class Solution
{
    public:
    int sum(int a , int b)
    {
        while(b!=0)
        {
    int c=a&b;
    a=a^b;
    b=c<<1;
        }
    return a;
        //code here
    }
};
