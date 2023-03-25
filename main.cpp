//Seif eldeen mahmoud              20200240
//Omar Ashraf Saber                20200340
//Mahmoud Saad Mahmoud             20200496
//Rana Mahmoud Mohammed            20201070


#include <iostream>
#include <string>
#include<cstring>
#include <vector>
using namespace std;
class StudentName{
    string name;
    vector <string> nameinvector;
    char *ptr;
public:
    StudentName()
    {
        cout << "Enter Your Full Name \n ";
        getline(cin , name);
         // declare a ptr pointer
        char nameinchar[name.size()];
        strcpy(nameinchar, name.c_str());
        ptr = strtok(nameinchar," "); // use strtok() function to separate string using comma (space) delimiter.
        // use while loop to check ptr is not null
        while (ptr != NULL)
        {
        nameinvector.push_back(ptr);
        ptr = strtok (NULL, " , ");
        }
    }


    void print()
    {
    if (nameinvector.size() == 1)
    {
        nameinvector.push_back(nameinvector.back());
        nameinvector.push_back(nameinvector.back());
    }
    if (nameinvector.size() == 2)
    {
        nameinvector.push_back(nameinvector.back());
    }
    cout << endl;
    cout <<"detailed parts of the name are: \n ";
    for (int i=0; i< nameinvector.size();i++){
        cout << nameinvector[i]<<endl;
    }
    }

    bool replace_string(int i , int j)
    {
        if (i<=nameinvector.size()&&j<=nameinvector.size())
        {
            cout << endl;
            swap(nameinvector[i],nameinvector[j]);
            for (int i=0; i< nameinvector.size();i++)
                {cout << nameinvector[i]<<" ";}
                return true;
        }
        else
        {
            return false;
        }

    }



};

int main()
{
    bool i1,i2,i3,i4,i5;
   StudentName s1;
   // Name is "aya ali ahmed sayed";
   s1.print(); // aya ali ahmed sayed
   i1=s1.replace_string(1,2); // replace(1,2) >> true >> aya ahmed ali sayed
   if (i1==true)
   {
       cout << "\n true \n";
   }
   else
   {
       cout << "\n false \n";
   }
   cout << endl;
   StudentName s2;
   // Name is "ahmed Mohamed";
   s2.print(); //ahmed mohamed mohamed
   i2=s2.replace_string(0,2); // replace(0,2) >> false >>
   if (i2==true)
   {
       cout << "\n true \n";
   }
   else
   {
       cout << "\n false \n";
   }
    cout << endl;
   StudentName s3;
   // Name is "sara";
   s3.print(); // sara sara sara
   i3=s3.replace_string(2,5); // replace(2,5) >> false >>
   if (i3==true)
   {
       cout << "\n true \n";
   }
   else
   {
       cout << "\n false \n";
   }
    cout << endl;
   StudentName s4;
   // Name is "ahmed Mohamed sayed";
   s4.print(); //ahmed Mohamed sayed
   i4=s4.replace_string(0,2); // replace(0,2) >> true >> sayed mohamed ahmed
   if (i4==true)
   {
       cout << "\n true \n";
   }
   else
   {
       cout << "\n false \n";
   }
    cout << endl;
   StudentName s5;
   // Name is "laila amr shady ahmed ihab";
   s5.print(); //laila amr shady ahmed ihab
   i5=s5.replace_string(3,5); // replace(3,5) >> false >>
   if (i5==true)
   {
       cout << "\n true \n";
   }
   else
   {
       cout << "\n false \n";
   }
    cout << endl;






}