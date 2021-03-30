#include <string>
#include <iostream>
#include <vector>
#include <stdint.h>
#include <cstdint>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;



    int main()
    {


        int testCases;
        cin>>testCases;


        for(int countT = 1; countT <= testCases; countT++)
        {
            int N, K;
            cin>>N>>K;

            string input;
            cin>>input;

            int currentScore = 0;
            int countV = 0;


            for(int i = 1; i <= floor(N/2); i++)
            {
                if(input[i-1]!=input[N-i])
                {
                    currentScore++;
                }
            }

            for(int i = 1; i <= floor(N/2); i++)
            {
                if(currentScore < K)
                {
                    if(input[i-1]==input[N-i])
                    {
                        countV++;
                        currentScore++;
                    }
                }
                else if(currentScore > K)
                {
                    if(input[i-1]!=input[N-i])
                    {
                        countV++;
                        currentScore--;
                    }
                }
                else
                {
                    break;
                }
            }

            cout<<"Case #"<<countT<<": "<<countV<<endl;
        }
        return 0;
    }
