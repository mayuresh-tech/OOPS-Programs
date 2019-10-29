#include <iostream>

using namespace std;

int main()
{
    int age; 
    float income;
    string city;
    char answer;

    try
    {
        cout<<"Enter age\n";
        cin>>age;
        if(age > 55 || age < 18)
            throw(age);

        cout<<"Enter income\n>>";
        cin>>income;
        if(income > 100000 || income < 50000)
            throw(income);
 
        cout<<"Enter city\n>>";
        cin>>city;
        if(!city.compare("mumbai") || !city.compare("banglore") || !city.compare("chennia"))
            throw(city);

        cout<<"Do you have 4 wheeler(y/n)\n>>";
        cin>>answer;
        if(answer == 'n')
            throw(answer);

    }

    catch(int)
    {
        cout<<"Age is inappropriate!!!\n";
    }

    catch(float)
    {
        cout<<"Income is not in required range!!!\n";
    }

    catch(string)
    {
        cout<<"You do not belong to the required city!!!\n";
    }

    catch(char)
    {
        cout<<"You must have 4 wheeler!!!\n";
    }

    return 0;
}