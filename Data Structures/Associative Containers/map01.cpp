 #include<iostream>
 #include<map>
 
 using namespace std;
 
 int main()
 {
     cout << "First elements" << endl;
     //map<string , int> myMap;// empty map
     map<string, int> myMap = {
                                {"apple",3},
                                {"ball",4},
                                {"cat",5}
                            };
       for(const auto& pair : myMap)
    {
        cout << pair.first << " :" << pair.second << "\n"; 
    }
    
    //adding/updating the ele 
    cout << "Secound elements" << endl;
    myMap["apple"] = 13 ; // updating the key 
    myMap.insert({"grape",5}); // ading the ele 
    // loop 
    for(const auto& pair : myMap)
    {
        cout << pair.first << " :" << pair.second << "\n";
    }
    
    cout << endl;
   // printing the value 
   cout<<  myMap.at("ball");
   cout << endl;
   // removing the ele 
    
   //cout << myclear();
   cout << endl;
   //loop
    for(const auto& pair : myMap)
    {
        cout << pair.first << " :" << pair.second << "\n";
    }
    
    
     
     
 }
