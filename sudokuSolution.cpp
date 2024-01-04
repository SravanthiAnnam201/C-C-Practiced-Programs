#include <iostream>
#include <cmath>

using namespace std;

bool safeCheck(int matrix[9][9], int i, int j, int num)
{   
    int k;
    for(k=0;k<9;k++)
    {
        if(matrix[k][j]==num || matrix[i][k]==num)
        {
            return false;
        }
    }
    
    int subi=(i/3)*3;
    int subj=(j/3)*3;
    for(int a=subi; a<(subi+3);a++)
    {
        for(int b=subj; b<(subj+3);b++)
        {
            if(matrix[a][b]==num)
            {
                return false;
            }
        }
    }
    return true;
}

bool solveProblem(int matrix[][9],int i,int j,int n)
{
    if(i==n)
    {
        for(int a=0;a<9;a++)
        {
           for(int b=0;b<9;b++)
           {
            cout<<matrix[a][b]<<" ";
           }
           cout<<endl;
        }
        return true;
    }
    if(j==n)
    {
        return solveProblem(matrix,i+1,0,n);
    }
    if(matrix[i][j]!=0)
    {
        return solveProblem(matrix,i,j+1,n);
    }
    for(int num=1;num<=9;num++)
    {
        if(safeCheck(matrix,i,j,num))
        {
            matrix[i][j]=num;
            bool solution=solveProblem(matrix,i,j+1,n);
            if(solution==true)
            {
                return true;
            }
        }
    }
    matrix[i][j]=0;
    return false;
}

int main()
{   
    int n=9;
    int mat[9][9]={        
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}};
        
        
    if(!solveProblem(mat,0,0,n))
    {
        cout<<"No solution exits"<<endl;
    }
    return 0;
}


