#include <bits/stdc++.h>
typedef long long ll;

using namespace std;


// ACCEPTED : ) 
// 100 % 

void solution(){
   
   ll n;
   cin >> n;

    if(n % 2 == 0){

        string s = "";

        for (int i = 0; i < n; i++){   

            if(i < n / 2) 
                s+= '0';

            else{
                s+= '1';
            }
        }

        cout << s << "\n";

    }else {
        cout << "-1\n";
    }

   
   
}

// Ignored by Online Judges
void setUp_ForLocalMachine(){

   // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   // if "input.txt" not exist : Create
   std::ifstream infile("input.txt");
   if(!infile.good()){
       ofstream MyFile("input.txt");
       MyFile << "3"; // writing example case
    }
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
 }
 
 
 int main(){
    setUp_ForLocalMachine();
    
    int testCase;
    cin >> testCase;
    
    while(testCase--){
       solution();
    }
    return 0;
 }