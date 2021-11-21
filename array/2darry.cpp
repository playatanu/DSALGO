#include <iostream>
using namespace std;

template <class T>
class Arry2D
{

    T arr[5][5];

public:
    void input()
    {

        for (int i = 0; i < 2; i++)
        {
            try
            {
                for (int j = 0; j < 2; j++)
                {
 

                    cin >> arr[i][j];


                     throw arr[2][2];

                   
                }

               
            }
            catch (int arr[2][2])
            {
               cout<<"bat";
            }

        } //arrry loop

       

    } //try close

   

void
output()
{

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            cout << arr[i][j];
            cout << " | ";
        }
        cout << " ";
    }
}
}
;

int main()
{

    Arry2D<int> arr;

    arr.input();
    arr.output();
}