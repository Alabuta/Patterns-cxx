#pragma once
#include <string>
#include <list>

class Product final {
public:

	template<class T, typename std::enable_if_t<std::is_same_v<std::decay_t<T>, std::basic_string<char>>>...>
    void AddPart(T &&part)
	{
		parts_.emplace_back(std::forward<std::decay_t<T>>(part));
	}

    void Show() const;

private:
    std::list<std::string> parts_;
};

