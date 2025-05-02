// Section 7
// Vectors

#include <iostream>
#include <vector>

using namespace std;

int main(){
    
//    vector <char> vowels;  empty
//    vector <char> vowels (5);
      vector <char> vowels {'a','e','i','o','u'};   

      cout << vowels[0] << endl;
      cout << vowels[4] << endl;

//    vector <int> test_scores (3); // 3 elements is initlized to Zero
//    vector <int> test_scores (3, 100)  3 elements all initilized to 100

      vector <int> test_scores {100, 98,89};
      cout << "\nTest Score using Array Synatx: " << endl;
      cout << test_scores[0] << endl;
      cout << test_scores[1] << endl;
      cout << test_scores[2] << endl;
      
      cout << "\nTest Score using Vector Synatx: " << endl;
      cout << test_scores.at(0) << endl;
      cout << test_scores.at(1) << endl;
      cout << test_scores.at(2) << endl;
      
      cout << "\nThere are " << test_scores.size() << endl;
      
      
      cout << "\nEnter 3 test scores: " ;
      cin >> test_scores.at(0);
      cin >> test_scores.at(1);
      cin >> test_scores.at(2);
      
      
       cout << "\nUpdated Test Scores: " << endl;
      cout << test_scores.at(0) << endl;
      cout << test_scores.at(1) << endl;
      cout << test_scores.at(2) << endl; 
      
      cout << "========================================="<<endl;
      cout << "Practice Problem" << endl;
      
      vector <int> vector1;
      vector <int> vector2;
      vector1.push_back(10);
      vector1.push_back(20);
      cout << "Vector 1 Elements: " << vector1.at(0) << " " << vector1.at(1) << " & Size: " << vector1.size() << endl;
      
      vector2.push_back(100);
      vector2.push_back(200);
      cout << "Vector 2 Elements: " << vector2.at(0) << " " << vector2.at(1) << " & Size: " << vector2.size() << endl;
      
      
      vector <vector<int>> vector_2d;
      vector_2d.push_back(vector1);
      vector_2d.push_back(vector2);
      
      cout << "The Elements in vector_2d is: "<<"\n" << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << "\n" << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
      
      
      
    cout << test_scores.at(10) << endl; // This cause an exception problem
 
  
//  int arr[3] = {1,2,3};
//   cout << arr[0] << arr[1] << arr[2] << arr[3] << endl;
    return 0;
}
