#include<iostream>
using namespace std;

int main()

{

        long int dno, temp;

        char hex[100];

        int j, remainder, i=1;

        cout<<"Enter Decimal Number : ";

        cin>>dno;

        temp = dno;

        while(temp!=0)

        {

                remainder = temp%16;

                if(remainder<10)   // Converts integer into character

                {

                        remainder = remainder + 48;

                }

                else

                {

                        remainder = remainder + 55;

                }

                hex[i++] = remainder;

                temp = temp/16;

        }

        cout<<"\nHexadecimal Number corresponding to Decimal Number : ";

        for(j=i-1; j>0; j--)

        {

                cout<<hex[j];

        }

        return 0;

}