class Solution{
	public:
   	vector<int>  common_digits(vector<int>a){
set<int> st;
for(int i : a) {
while(i) {
int dig = i% 10;
st.insert(dig);
i =i/ 10;
}
}
vector<int> ans(st.begin(), st.end());
return ans;
   	    // Code here
   	}    
};
