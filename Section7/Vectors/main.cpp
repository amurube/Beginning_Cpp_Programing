#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    cout<<vowels[0]<<endl;
    cout<<vowels[4]<<endl;

    // vector <int> test_scores (3);
    // vector <int> test_scores (5,100); // initialize vector test_scores with 5 positions all to 100
    vector <int> test_scores {100,98,89};

    cout<< "\nTest scores using array syntax" <<endl; // this will be bound check
    cout<<test_scores[0]<<endl;
    cout<<test_scores[1]<<endl;
    cout<<test_scores[2]<<endl;

    cout<< "\nTest scores using vector syntax" <<endl; // this will be bound check
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<< "\nThere are " << test_scores.size()<<" scores in test_vector" <<endl; // this will be bound check

    cout<< "\nEnter 3 test scores: " << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout<<"\nThe updated scores are: "<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;

    cout<<"\nEnter a test score to add to the vector: "<<endl;
    
    int score_to_add;
    cin>>score_to_add;
    test_scores.push_back(score_to_add);

    cout<<"The test scores are now:" <<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.at(3)<<endl;

    cout<< "\nThere are " << test_scores.size()<<" scores in test_vector" <<endl; // this will be bound check

    // cout<< "This should throw an exception!!"<< test_scores.at(10)<<endl;


    //Example of a 2D vector
    vector <vector<int>> movie_ratings
    {
        {1,2,3,1},
        {1,2,3,2},
        {1,2,3,3}
    };

    int viewer = 0;
    cout<<"\nHere are the movie ratings for viewer "<< viewer+1 << " using array sintax" <<endl;
    cout<< movie_ratings[viewer][0]<<endl;
    cout<< movie_ratings[viewer][1]<<endl;
    cout<< movie_ratings[viewer][2]<<endl;
    cout<< movie_ratings[viewer][3]<<endl;

    cout<<"\nHere are the movie ratings for viewer "<< viewer+1 << " using vector sintax"<<endl;
    cout<< movie_ratings.at(viewer).at(0)<<endl;
    cout<< movie_ratings.at(viewer).at(1)<<endl;
    cout<< movie_ratings.at(viewer).at(2)<<endl;
    cout<< movie_ratings.at(viewer).at(3)<<endl;
}