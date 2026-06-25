class Solution {
public:
    vector<vector<int>> generate(int numRows) { 
        vector<vector<int>> g;
        for(int i=0;i<numRows;i++)
        {vector<int>v;
for(int j=0;j<=i;j++)
{if(j==0 || j==i)
{v.push_back(1);

}
else 
{v.push_back(g[i-1][j-1]+g[i-1][j]);
    
}

}g.push_back(v);
        }return g;
    }
};