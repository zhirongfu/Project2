#pragma once
#include"Post.hpp"
#ifndef GENERAL_H
#define GENERAL_H
class General : public Post
{
	int array_int[6];
public:
	General();
	General(std::string, std::string, std::string);
	bool reactToPost(int);
	void getReactions()const;
	void displayPost();
};
#endif 
