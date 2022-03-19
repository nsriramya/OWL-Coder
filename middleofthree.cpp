
class Solution{
  public:
    int middle(int a, int b, int c){
        if(a>b and a>c)
        {
            return max(b,c);
        }
        else if(b>a and b>c)
        {
            return max(a,c);
        }
        else return max(a,b);
        //code here//Position this line where user code will be pasted.
    }
};
