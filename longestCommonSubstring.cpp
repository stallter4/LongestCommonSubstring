#include <string.h>
#include <iostream>

using namespace std;

string longestCommonSubstring(string* string1, string* string2)
{
   string final = "";
   for (unsigned i=0;i<string1->length()+1;i++)
   {
      for(unsigned j=i+1;j<string1->length()+1;j++)
      {
         if((string2->find(string1->substr(i,j - i)))!= std::string::npos)
         {
            if(string1->substr(i,j - i).length() > final.length())
            {
               final = string1->substr(i,j - i);
            }
            continue;
         }
         else
         {
            break;
         }
      }
   }
   
   return final;
} 


int main (int argc, char **argv)
{
   string s1 = "Iiiiiiiiiiiiii am a kind of long stringerrrrr";
   string s2 = "Iiiiiiiiii am a shorter stringerrrr";
   string s3 = longestCommonSubstring(&s1, &s2);
   std::cout << s3;
}