#pragma once
#include"Post.hpp"
#ifndef POLL_H
#define POLL_H
class Poll :public Post
{
	 std::vector<std::string> options;
	 std::vector<int> vote_number;
public:
	Poll();
	Poll(std::string, std::string, std::string, std::vector<std::string> options);
	bool votePoll(int);
	void changePollOption(int,int);
	void getPollOptions()const;
	int getPollVotes(int);
	void displayPost();
};
#endif 
