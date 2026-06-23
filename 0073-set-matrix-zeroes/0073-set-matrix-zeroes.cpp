class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int col=matrix[0].size();
        vector<int>r(rows,0);
        vector<int>c(col,0);
        for(int i=0;i<rows;i++)
        {for(int j=0;j<col;j++)
        {if(matrix[i][j]==0)
        {
            r[i]=1;
            c[j]=1;

        }

        }}
        for(int i=0;i<rows;i++)
        {for(int j=0;j<col;j++)
        {if(r[i]==1||c[j]==1)
        {
            matrix[i][j]=0;

        }

        }

        }
    }
};