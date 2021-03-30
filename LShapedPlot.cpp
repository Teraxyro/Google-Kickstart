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
            int R,C;
            cin>>R>>C;
            int countV = 0;
            int grid[R][C];

            for(int j = 0; j < R; j++)
            {
                for(int i = 0; i < C; i++)
                {
                    cin>>grid[j][i];
                }
            }

            for(int i = 0; i < C; i++)
            {
                int rCount = 0;

                for(int j = 0; j < R; j++)
                {
                    if(grid[j][i]==1)
                    {
                        int lCount = 0;
                        int dCount = 0;
                        int rCount = 0;
                        int uCount = 0;
                        if(i>0)
                        {
                            for(int tempI = i; tempI >= 0; tempI--)
                            {
                                if(grid[j][tempI]==1)
                                {
                                    lCount++;
                                }
                                else{
                                    break;
                                }
                            }
                        }
                        if(j<R-1)
                        {
                            for(int tempJ = j; tempJ < R; tempJ++)
                            {
                                if(grid[tempJ][i]==1)
                                {
                                    dCount++;
                                }
                                else{
                                    break;
                                }
                            }
                        }
                        if(i<C-1)
                        {
                            for(int tempI = i; tempI < C; tempI++)
                            {
                                if(grid[j][tempI]==1)
                                {
                                    rCount++;
                                }
                                else{
                                    break;
                                }
                            }
                        }
                        if(j>0)
                        {
                            for(int tempJ = j; tempJ >= 0; tempJ--)
                            {
                                if(grid[tempJ][i]==1)
                                {
                                    uCount++;
                                }
                                else{
                                    break;
                                }
                            }
                        }


                        if(uCount >= 4 && lCount >= 2)
                        {
                            for(int l = lCount; l >= 2; l--)
                            {
                                if(2*l <= uCount)
                                {
                                    countV++;
                                }
                            }
                        }
                        if(uCount >= 4 && rCount >= 2)
                        {
                            for(int r = rCount; r >= 2; r--)
                            {
                                if(2*r <= uCount)
                                {
                                    countV++;
                                }
                            }
                        }

                        if(lCount >= 4 && uCount >= 2)
                        {
                            for(int u = uCount; u >= 2; u--)
                            {
                                if(2*u <= lCount)
                                {
                                    countV++;
                                }
                            }
                        }
                        if(lCount >= 4 && dCount >= 2)
                        {
                            for(int d = dCount; d >= 2; d--)
                            {
                                if(2*d <= lCount)
                                {
                                    countV++;
                                }
                            }
                        }

                        if(dCount >= 4 && lCount >= 2)
                        {
                            for(int l = lCount; l >= 2; l--)
                            {
                                if(2*l <= dCount)
                                {
                                    countV++;
                                }
                            }
                        }
                        if(dCount >= 4 && rCount >= 2)
                        {
                            for(int r = rCount; r >= 2; r--)
                            {
                                if(2*r <= dCount)
                                {
                                    countV++;
                                }
                            }
                        }

                        if(rCount >= 4 && uCount >= 2)
                        {
                            for(int u = uCount; u >= 2; u--)
                            {
                                if(2*u <= rCount)
                                {
                                    countV++;
                                }
                            }
                        }
                        if(rCount >= 4 && dCount >= 2)
                        {
                            for(int d = dCount; d >= 2; d--)
                            {
                                if(2*d <= rCount)
                                {
                                    countV++;
                                }
                            }
                        }

                    }
                }
            }

            cout<<"Case #"<<countT<<": "<<countV<<endl;
        }
        return 0;
    }
