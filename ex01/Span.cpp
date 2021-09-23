#include "Span.hpp"

Span::Span(unsigned int n)
	: m_n(n)
{
	if (m_n <= 0)
		throw (MyException("Inappropriate size of the container!"));
}

Span::Span(const Span & other)
{
	*this = other;
}

Span::~Span()
{

}

Span & Span::operator= (const Span & other)
{
	if (this != &other)
	{
		this->m_n = other.m_n;
		this->m_container.resize(this->m_n);
		this->m_container = other.m_container;
	}
	return (*this);
}

//unsigned int	Span::getN(void) const
//{
//	return (m_n);
//}

int Span::operator[] (unsigned int indx) const
{
	if (indx < 0 || indx >= this->m_n)
		throw (MyException("Inappropriate index!"));
	return (m_container[indx]);
}

void 			Span::addNumber(int num)
{
	if (m_container.size() < m_n)
		m_container.push_back(num);
	else
		throw (MyException("There is no free space in the container!"));
}

void			Span::addRange(typename T::iterator bgn, typename T::iterator end)
{
	if (m_container.size() + std::distance(bgn, end) < m_n )
		m_container.insert(m_container.end(), bgn, end);
	else
		throw (MyException("There is no free space in the container!"));
}

unsigned int	Span::shortestSpan()
{
	if (m_container.size() < 2)
		throw (MyException("There are less than 2 values in the container. Calculating is unable!"));
	else
	{
		std::sort(m_container.begin(), m_container.end())
	}

}

unsigned int	Span::longestSpan()
{

}