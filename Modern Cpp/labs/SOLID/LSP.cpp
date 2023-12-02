#include <iostream>

 struct Shape
 {
 	int m_Width;
 	int m_Height;
 	virtual int width() const = 0;
 	virtual void set_width(int m_width) = 0;
 	virtual int height() const = 0;
  	virtual void set_height(int m_height) = 0;
 	virtual int Area()const = 0;
 };


/// <summary>
/// Liskov Substitution Principle the Perant class must be replaceable out substitutable with thier subtypes
///	the rule of IS-A the child object IS-A parent Object like (Triangle is A shape)
/// </summary>

struct Rectangle //: public Shape
{
	int m_Width;
	int m_Height;

	Rectangle(int width, int height)
		: m_Width(width),
		  m_Height(height)
	{
	}

	int width() const
	{
		return m_Width;
	}

	virtual void set_width(int m_width)
	{
		this->m_Width = m_width;
	}

	int height() const
	{
		return m_Height;
	}

	virtual void set_height(int m_height)
	{
		m_Height = m_height;
	}

	int Area()const
	{
		return m_Width * m_Height;
	}
};


struct Square : public Rectangle   //: public Shape
{
	Square(int width, int height)
		: Rectangle(width, height)
	{
	}

	int width() const
	{
		return m_Width;
	}

	void set_width(int m_width) override
	{
		m_Height = m_Width = m_width;
	}

	int height() const
	{
		return m_Height;
	}

	void set_height(int m_height)
	{
		m_Height = m_Width  = m_height;
	}

	int Area()const
	{
		return m_Width * m_Height;
	}
};

void process (Rectangle& r)
{
	int w = r.width(); //5
	r.set_height(10); //height =10 , width = 10
	std::cout << "expect area = " << (w * 10) << " , got " << r.Area() << std::endl;
}

int main() 
{
	Rectangle r{ 5,5 };

	process(r);

	Square s{ 5,5 };

	process(s);

	return 0;
}