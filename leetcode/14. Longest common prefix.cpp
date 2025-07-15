 #include<iostream>
 #include<string>
 #include<vector>
 using namespace std;
 string  prefix(vector <string>& strs)
 {
     int min_length=strs[0].size() ;
     for(int i=0 ; i < strs.size() ; i++)
     {
         if(min_length >= strs[i].size())
         {
             min_length = strs[i].size();
         }
     }
     
     string res = " ";
     
     for(int i=0 ; i< min_length ; i++)
     {
         char finding_character = strs[0][i];
         
         for(int j=1 ; j < strs.size()  ; j++)
         {
             if(finding_character != strs[j][i])
             {
                 return res; 
             }
         }
         
         res = res + finding_character;
     }
     return res;
       
 }
 int main()
 {
    vector <string> strs = { "flower" , "flow" , "flight"};
     string res = prefix(strs);
     cout << res;
 }
