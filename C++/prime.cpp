
#include <iostream>
#include <vector>
#include <unordered_map>
#include<string>
using namespace std;


class Solution {
public:
    int romanToInt(string str) 
    {
        int ans=0,l=str.length();
        unordered_map<char,int>m;

        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        for (int i = 0; i <= l - 1; i++)

        {
            if(m[str[i]] < m[str[i+1]])

            { ans=ans-m[str[i]];
            }
            else
            {
                ans=ans+m[str[i]];
            }
        }

        return ans;

    }
};


int main() {
    Solution s;
    string str="LVIII";
    int Ar=s.romanToInt(str);

    cout<<"arabic numer is "<<Ar;
    
  
    return 0;
}