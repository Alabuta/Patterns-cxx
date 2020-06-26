#pragma once
#include <string>
#include <list>

class Product final {
public:

	template<class T>
	requires std::is_same_v<std::remove_cvref_t<T>, std::string>
    void AddPart(T &&part)
	{
		parts_.push_back(std::forward<std::remove_cvref_t<T>>(part));
	}

    void Show() const;

private:
    std::list<std::string> parts_;
};

