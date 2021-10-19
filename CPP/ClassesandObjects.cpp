#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int score[5];
    void input()
    {
        for (int i = 0; i < 5; i++) 
        {
            cin >> score[i];
        }
    }
    int calculateTotalScore() 
    {
        int count = 0;
        for (int i = 0; i < 5; i++) 
        {
            count += score[i];
        }
        return count;
    }
};

