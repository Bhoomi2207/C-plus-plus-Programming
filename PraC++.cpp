#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout<<"\nIn the vector 1 : "<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"Vector 1 contains "<<vector1.size()<<" elements."<<endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout<<"\nIn the vector 2 : "<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<"Vector 2 contains "<<vector2.size()<<" elements."<<endl;

    vector <vector<int>> vector_2d; 

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout<<"\nVector 2D"<<endl;
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(1).at(0)<<endl;
    cout<<vector_2d.at(0).at(1)<<" "<<vector_2d.at(1).at(1)<<endl;

    vector1.at(0)=1000;
    cout<<"\nVector 2D after changing:"<<endl;
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(1).at(0)<<endl;
    cout<<vector_2d.at(0).at(1)<<" "<<vector_2d.at(1).at(1)<<endl;

    cout<<"\nVector 1 after change:"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"Vector 1 contains "<<vector1.size()<<" elements."<<endl;
    return 0;
}