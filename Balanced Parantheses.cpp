//REST IN THE END NOT IN THE MIDDLE
#define ll long long
#define ull unsigned long long
#define f(i, x, y) for (ll i = x; i <= y; i++)
#define rf(i, x, y) for (ll i = x; i >= y; i--)
#define forn(i, n) for (ll i = 0; i < n; i++)
#define inarr(A,n) forn(i,n) cin>>A[i];
//CODE STARTS FROM HERE.
#include <bits/stdc++.h>
using namespace std;
bool matching (char a, char b){
    if((a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}') ){
        return true;
    }
    return false;
}
bool solve(string str){
    stack <int> s;
    forn(i,str.length()){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            s.push(str[i]);
        }
        else{
            if(s.empty()==true){
                return false;
            }
            else if (matching(s.top(),str[i])==false){

            }
        }
    }

}
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin>>str;
    // long long int t;
    // cin>>t;
    // while(t--){
        solve(str);
    //}
return 0;
}