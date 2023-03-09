#include "me2.h"
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    string inputname;
    int inputage;
    string input;
    vector<Person> people;
    Person temp;

    //extracting input from termninal
    cout<<"Input data: "<<endl;
    while (true)
    {
        getline(cin,input);
        stringstream inputline(input);
        if (inputline >> inputname) 
        {
            if (inputname=="end")
            {
                cout<<"All data inputted."<<endl;
                break;
            }
            else if (inputline>>inputage)
            {
                temp=Person(inputname,inputage);
                people.push_back(temp);
            }
            else
            {
                cout<<"Invalid input. Input 'end' to stop."<<endl;
            }
        }
    }

    //sort via bubble sort algorithm
    for (int j=1; j<people.size(); j++)
    {
        for (int i=0; i<people.size()-1; i++)
        {
            if (people[i].getAge() > people[i+1].getAge())
            {
                temp=people[i];
                people[i]=people[i+1];
                people[i+1]=temp;
            }
        }
    }

    //print the sorted vector
    cout<<"\nSorted data:"<<endl;
    for (int i = 0; i<people.size(); i++)
    {
        cout<<people[i].getName()<<" "<<people[i].getAge()<<endl;
    }

return 0;
}