#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include "General.hpp"
using namespace std;
General::General()
{

}
General::General(string posttitle, string postbody, string username)
{
    setTitle(posttitle);
    setBody(postbody);
    setUsername(username);

    time_t time_stamp = time(0);
    setTimestamp(time_stamp);
    array_int[0] = 0;
    array_int[1] = 0;
    array_int[2] = 0;
    array_int[3] = 0;
    array_int[4] = 0;
    array_int[5] = 0;
}
bool General::reactToPost(int value)
{
    if (value == 1 || value == 2 || value == 3 || value == 4 || value == 5 || value == 6)
    {
        if (value == 1)
        {
            array_int[0] = array_int[0] + 1;
            return true;
        }
        else
        {
            if (value == 2)
            {
                array_int[1] = array_int[1] + 1;
                return true;
            }
            else
            {
                if (value == 3)
                {
                    array_int[2] = array_int[2] + 1;
                    return true;
                }
                else
                {
                    if (value == 4)
                    {
                        array_int[3] = array_int[3] + 1;
                        return true;
                    }
                    else
                    {
                        if (value == 5)
                        {
                            array_int[4] = array_int[4] + 1;
                            return true;
                        }
                        else
                        {
                            if (value == 6)
                            {
                                array_int[5] = array_int[5] + 1;
                                return true;
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        return false;
    }
}

void General::getReactions()const
{
    cout << "Like : " << array_int[0] << " | " << "Dislike : " << array_int[1] << " | "
        << "Laugh : " << array_int[2] << " | " << "Wow : " << array_int[3] << " | "
        << "Sad : " << array_int[4] << " | " << "Angry : " << array_int[5] << endl;
}
void General::displayPost()
{
    cout << endl;
    cout << "{" << getTitle() << "}" << "posted at {"; getTimeStamp(); cout << " }" << endl;
    cout << "{" << getBody() << "}" << endl;
    getReactions();
    cout << endl;
}
