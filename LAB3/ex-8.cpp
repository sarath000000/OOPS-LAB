#include<bits/stdc++.h>
using namespace std;
class student
{
private:
    int admno;
    string name;
    float marksEng;
    float marksMaths;
    float marksSci;
    float total;

    inline float compute (float marksEng,float marksMaths,float marksSci){
        return marksEng+marksMaths+marksSci;
    }
public:
    void readData(){
        cout<<"admno="<<endl;
        cin>>admno;
        cout<<"name="<<endl;
        cin>>name;
        cout<<"marks english="<<endl;
        cin>>marksEng;
        cout<<"marks maths="<<endl;
        cin>>marksMaths;
        cout<<"marks sci="<<endl;
        cin>>marksSci;
        total=compute(marksEng,marksMaths,marksSci);
        cout<<"total marks of the student is "<<total<<endl;    }
        
        void ShowData(){
            cout<<"admission number is"<<admno<<endl;
            cout<<"names is"<<name<<endl;;
            cout<<"english marks"<<marksEng<<endl;;
            cout<<"maths marks "<<marksMaths<<endl;
            cout<<"science marks "<<marksSci<<endl;
            cout<<"total marks "<<total<<endl;

        } 
};
   
int main(){
    student teja;
    teja.readData();
    teja.ShowData();
    
}