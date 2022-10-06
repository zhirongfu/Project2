#include <iostream>
#include<vector>
#include <time.h>
#include "Poll.hpp"
using namespace std;
Poll::Poll()
{


}
Poll::Poll(string title, string question, string username, std::vector<std::string> options)
{
    setTitle(title);
    setBody(question);
    setUsername(username);
    time_t time_stamp = time(0);
    setTimestamp(time_stamp);
    options.reserve(6);
    vote_number.reserve(6);
}
bool Poll::votePoll(int value)
{
    if (value>=0&&value<options.size())
    {
        options.push_back("option_");
        vote_number.push_back(value);
        return true;
    }
    else
    {
        return false;
    }
}
void Poll::changePollOption(int newoption,int choice_number)
{
    for (int i = 0; i < options.size(); i++)
    {
        if (newoption==i)
        {
            options[i] = "option_";
        }
    }
}
void Poll::getPollOptions()const
{
    for (int i = 0; i < options.size(); i++)
    {
        cout << vote_number[i]<<" for : "<<options[i]<<i<<endl;
    }
}
int Poll::getPollVotes(int index)
{
  return vote_number[index];
}
void Poll::displayPost()
{
    cout << endl;
    cout << "{" << getTitle() << "}" << "posted at {"; getTimeStamp(); cout << " }" << endl;
    cout << "{" << getBody() << "}" << endl;
    getPollOptions();
    cout << endl;
}
