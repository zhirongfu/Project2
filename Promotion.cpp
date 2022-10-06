#include <iostream>
#include <regex>
#include <time.h>
#include "Promotional.hpp"
using namespace std;
Promotional::Promotional()
{
}
Promotional::Promotional(string title, string body, string username,string link)
{
    setTitle(title);
    setBody(body);
    setUsername(username);
    time_t time_stamp = time(0);
    setTimestamp(time_stamp);

    // regex pattern
    std::string pattern = "https?:\/\/(www\.)?[-a-zA-Z0-9@:%._\+~#=]{2,256}\.[a-z]{2,4}\b([-a-zA-Z0-9@:%_\+.~#?&//=]*)";
    // Construct regex object
    std::regex url_regex(pattern);
    // Check for match
    if (std::regex_match(link, url_regex) == true) 
    {
        url = link;
    }
    else 
    {
        url = "Broken Link";
    }
}
string Promotional::getLink()const
{
    return url;
}
bool Promotional::setLink(string link)
{
    // regex pattern
    std::string pattern = "https?:\/\/(www\.)?[-a-zA-Z0-9@:%._\+~#=]{2,256}\.[a-z]{2,4}\b([-a-zA-Z0-9@:%_\+.~#?&//=]*)";
    // Construct regex object
    std::regex url_regex(pattern);
    // Check for match
    if (std::regex_match(link, url_regex) == true)
    {
        url = link;
        return true;
    }
    else
    {
        url = "Broken Link";
        return false;
    }
}
void Promotional::displayPost()
{
    cout << endl;
    cout << "{" << getTitle() << "}" << "posted at {"; getTimeStamp(); cout << " }" << endl;
    cout << "{" << getBody() << "}" << endl;
    cout << "{" << url << "}";
    cout << endl;
}
