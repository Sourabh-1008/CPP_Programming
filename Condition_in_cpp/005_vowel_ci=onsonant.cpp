//Program to check if an alphabet is a vowel or a consonant.
#include<iostream>
using namespace std;
int main()
{
    char c;
    int isLowerCaseVowel,isUpperCaseVowel;
    cout<<"Enter the alphabet:-";
    cin>>c;
    isLowerCaseVowel = (c == 'a'||c == 'e'|| c=='i' || c == 'o' || c == 'u' );
    isUpperCaseVowel = (c == 'A'||c == 'E'|| c=='I' || c == 'O' || c == 'U' );
    if(isLowerCaseVowel ||isUpperCaseVowel)
    {
        cout<<c<<" is Vowel";
    }
    else
    {
        cout<<c<<" is a consonant";
    }
    return 0;
    }