#pragma once
#include"Post.hpp"
#ifndef PROMOTIONAL_H
#define PROMOTIONAL_H
class Promotional :public Post
{
	std::string url;
public:
	Promotional();
	Promotional(std::string, std::string, std::string, std::string);
	std::string getLink()const;
	bool setLink(std::string);
	void displayPost();
};
#endif 
