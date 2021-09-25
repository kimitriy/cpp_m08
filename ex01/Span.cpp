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

int Span::operator[] (unsigned int indx) const
{
	if (indx < 0 || indx >= m_container.size())
		throw (MyException("Inappropriate index!"));
	return (m_container[indx]);
}

size_t	Span::getSize(void) const
{
	return (m_container.size());
}

void 			Span::addNumber(int num)
{
	if (m_container.size() < m_n)
		m_container.push_back(num);
	else
		throw (MyException("There is no free space in the container!"));
}

void	Span::addRange(std::vector<int>::iterator bgn, std::vector<int>::iterator end)
{
	if (m_container.size() + std::distance(bgn, end) < m_n )
		m_container.insert(m_container.end(), bgn, end);
	else
		throw (MyException("There is no free space in the container!"));
}


//https://www.cplusplus.com/reference/algorithm/find_if/
unsigned int	Span::shortestSpan()
{
	if (m_container.size() < 2)
		throw (MyException("There are less than 2 values in the container. Calculating is unable!"));
	std::sort(m_container.begin(), m_container.end());
	std::vector<int>::const_iterator itr = m_container.begin();
	unsigned int spn = *(itr + 1) - *(itr);
	while (itr + 1 != m_container.end())
	{
		unsigned int tmp = *(itr + 1) - *(itr);
		if (tmp < spn)
			spn = tmp;
		itr++;
	}
	return (spn);
}

unsigned int	Span::longestSpan()
{
	if (m_container.size() < 2)
		throw (MyException("There are less than 2 values in the container. Calculating is unable!"));
	std::sort(m_container.begin(), m_container.end());
	unsigned int spn = m_container.back() - m_container.front();
	return (spn);
}

std::ostream & operator<<( std::ostream & out, Span const & sp)
{
	size_t i = 0;
	out << "Span: ";
	while(i < sp.getSize())
	{
		out << sp[i] << " ";
		i++;
	}
	return (out);
}