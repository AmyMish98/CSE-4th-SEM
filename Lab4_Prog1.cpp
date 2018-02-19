#include<iostream>
#include<stdlib.h>
using namespace std;

class matrix
{
    int mat[100][100];
    int row, col;
    public: void readMatrix()
            {
                cout<<"\n Enter number of rows: ";
                cin>>row;
                cout<<"\n Enter number of columns: ";
                cin>>col;
                cout<<"\n Enter the matrix: ";
                for (int i=0;i<row;i++)
                {
                    for (int j=0;j<col;j++)
                        cin>>mat[i][j];
                }

            }
            friend void matrixMultiplication(matrix M1, matrix M2);
};



int main()
{
    matrix M1, M2;
    M1.readMatrix();
    M2.readMatrix();
    matrixMultiplication(M1, M2);

    return 0;
}

void matrixMultiplication(matrix M1, matrix M2)
{
    if (M1.col!=M2.row)
    {
        cout<<"\n Matrix Multiplication not possible";
        exit(0);
    }
    else
    {
        matrix M3;
        M3.row = M1.row;
        M3.col = M2.col;
        for (int i=0;i<M1.row;i++)
        {
            for (int j=0;j<M2.col;j++)
            {
                M3.mat[i][j]=0;
                for (int k=0;k<M1.col;k++)
                M3.mat[i][j]+=M1.mat[i][k]*M2.mat[k][j];
            }
        }
        for (int i=0;i<M3.row;i++)
        {
            for (int j=0;j<M3.col;j++)
            cout<<M3.mat[i][j]<<"\t";

            cout<<endl;
        }
    }
}
