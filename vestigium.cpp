#include<bits/stdc++.h>
#include<set>


using namespace std;


int main()
{

    int t, n, mat[100][100];
    cin>>t;

    for(int k=1; k<t+1; k++)
  {
      int counts=0,countsk=0, sum=0;
      cin>>n;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>mat[i][j];
            }
        }


     for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
      {
          if(i==j)
            sum=sum+mat[i][j];
      }
    }

    for (int i=0; i<n; i++)
    {
        set<int>s;
        for(int j=0; j<n; j++)
      {
          s.insert(mat[i][j]);

      }
       if(s.size()!=n){

          counts++;
       }
    }

    for (int j=0; j<n; j++)
  {
      set<int>s;
      for(int i=0; i<n; i++)
      {
          s.insert(mat[i][j]);

      }
       if(s.size()!=n){

          countsk++;
       }
  }

  cout<<"Case #"<<k<<": "<<sum<<" "<<counts<<" "<<countsk<<endl;
}


    return 0;


    }



