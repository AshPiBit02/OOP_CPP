#include<iostream>
using namespace std;
class Matrix
{
    private:
    int mat[10][10];
    int rows,cols;
    public:
    Matrix(int r=0,int c=0)
    {
        rows=r;
        cols=c;
    }
    void setSize(int r,int c)
    {
        rows=r;
        cols=c;
    }
    int getRows(){ return rows;}
    int getCols(){ return cols;}
    void input()
    {
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                cout<<"Enter Element ["<<i<<"]["<<j<<"]: ";
                cin>>mat[i][j];
            }
        }
    }
    void display()
    {
     for(int i=0;i<rows;i++)
     {
        for(int j=0;j<cols;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
     }
    }
    Matrix multiply(Matrix m2)
    {
        Matrix result;
        if(cols!=m2.rows)
        {
            cout<<"Error: Matrix multiplication not possible(incompatable sizes)"<<endl;
            result.setSize(0,0);
            return result;
        }
        result.setSize(rows,m2.cols);
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                result.mat[i][j]=0;
                for(int k=0;k<cols;k++)
                {
                    result.mat[i][j]+=mat[i][k]*m2.mat[k][j];
                }
            }
        }
        return result;
    }
};
int main()
{
Matrix A,B,C;
int choice;
int r1,r2,c1,c2;
do{
    cout<<"\n------Matix ADT MENU-------"<<endl;
    cout<<"1.Create Matrix A"<<endl;
    cout<<"2.Create Matrix B"<<endl;
    cout<<"3.Display Matix A"<<endl;
    cout<<"4.Display Matix B"<<endl;
    cout<<"5.Multiply A and B"<<endl;
    cout<<"6.Display Result"<<endl;
    cout<<"Enter 0 to exit:"<<endl;
    cout<<"Enter choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Enter rows and colums of Matix A: ";
        cin>>r1,c1;
        A.setSize(r1,c1);
        A.input();
        break;
        case 2:
        cout<<"Enter rows and colums of Matix B: ";
        cin>>r2,c2;
        B.setSize(r2,c2);
        B.input();
        break;
        case 3:
        A.display();
        break;
        case 4:
        B.display();
        break;
        case 5:
        C=A.multiply(B);
        break;
        case 6:
        C.display();
        break;
        case 0:
        cout<<"Exiting....."<<endl;
        break;
        default:
        cout<<"Invalid Choice! Try again"<<endl;
    }
}while(choice!=0);
return 0;
}

