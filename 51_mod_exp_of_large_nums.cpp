// class Solution
// {
// 	public:
// 		long long int PowMod(long long int x,long long int n,long long int M)
// 		{
// 		    long long int ans = 1;
// 		    while(n>0){
// 		        if(n&1){
// 		            // it means when n is odd..
// 		            ans = (ans * x) % M ; //modulo in every iteration does not change the result as if it does in final cal. of (x^n) % M
// 		            // we are doing this bcz it helps to storing the ans ..
// 		            // otherwise x^n can't be store for x=n=10^9 in long long int....or even in any c++ data types
// 		        }
// 		        x = (x * x) % M; // x*x can't be store in long long int for x=10^9
// 		        n=n>>1; // that is n = n/2 // so every time length becomes half so TC is O(log n)
// 		    }
// 		    return ans;
// 		}
// };