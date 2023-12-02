#include <iostream>
#include <memory>
#include <string>
#include <vector>

std::string vColor[] = { "Red","Green","Blue" };
enum class Color { Red, Green, Blue } ;

/**
 * \brief Globale variable for print function
 */
std::string vSize[] = { "Small","Medium","Large" };
enum class Size { Small, Medium, Large};


struct Product
{
	std::string		m_Name;
	Color			m_Color;
	Size			m_Size;
};


typedef std::vector<Product*> Items;

struct Prodcuts
{
	static Items by_color(Items items, Color color)
	{
		Items results;
		for (auto& i : items)
			if (i->m_Color == color)
				results.push_back(i);

		return  results;
	}

	static Items by_size(Items items, Size size)
	{
		Items results;
		for (auto& i : items)
			if (i->m_Size == size)
				results.push_back(i);

		return  results;
	}

	/// <summary>
	/// New requirement to find product with color and size 
	/// </summary>
	/// <param name="items">The Products List</param>
	/// <param name="color">Color Specification</param>
	/// <param name="size">Size Specification</param>
	/// <returns>The Items that fit with the Specs </returns>

	static Items by_color_and_size(Items items, Color color, Size size)
	{
		Items results;
		for (auto& i : items)
			if (i->m_Color == color && i->m_Size == size)
				results.push_back(i);

		return  results;
	}
};

/*The fix using specification pattern*/

/// <summary>
/// Interface for specification 
/// </summary>
/// <typeparam name="T"></typeparam>
template <typename T>
struct ISpecification
{
	virtual bool is_specification(T* item) = 0;
};

struct ColorSpecification : public ISpecification<Product>
{
	Color color;

	explicit ColorSpecification(Color color)
		: color(color)
	{
	}

	bool is_specification(Product* s) override
	{
		return (s->m_Color == color);
	}
};

struct SizeSpecification : public ISpecification<Product>
{
	Size size;

	explicit SizeSpecification(Size size)
		: size(size)
	{
	}

	bool is_specification(Product* s) override
	{
		return (s->m_Size == size);
	}
};

/// <summary>
/// First type specification 
/// </summary>
struct SizeAndColorSpecification : public ISpecification<Product>
{
	SizeSpecification size;
	ColorSpecification color;

	SizeAndColorSpecification( SizeSpecification& size,  ColorSpecification& color)
		: size(size),
		  color(color)
	{
	}


	bool is_specification(Product* s) override
	{
		return (size.is_specification(s) && color.is_specification(s));
	}
};

//struct AndSpecification : public ISpecification<Product>
//{
//	ISpecification& spec1;
//	ISpecification& spec2;
//
//	AndSpecification(ISpecification& spec1, ISpecification& spec2)
//		: spec1(spec1),
//		  spec2(spec2)
//	{
//	}
//
//
//	bool is_specification(Product* s) override
//	{
//		return (spec1.is_specification(s) && spec2.is_specification(s));
//	}
//};




template <typename T>
struct IFind
{
	virtual std::vector<T*>Find(std::vector<T*> items, ISpecification<T>& spec) = 0;
};

struct FindProduct : public IFind<Product>
{
	virtual std::vector<Product*>Find(std::vector<Product*> items, ISpecification<Product>& spec)
	{
		Items results;
		for (auto& p : items)
			if (spec.is_specification(p))
				results.push_back(p);

		return  results;
	}
};



/// <summary>
/// 
/// </summary>
/// <param name="argc"></param>
/// <param name="argv"></param>
/// <returns></returns>

int main(int argc, char ** argv)
{

	Product apple{ "Apple", Color::Green , Size::Small };
	Product car{ "Car", Color::Blue , Size::Large };
	Product tree{ "Tree", Color::Green, Size::Large};

	ColorSpecification green{Color::Green};
	SizeSpecification  large{ Size::Large };
	SizeAndColorSpecification size_color{ large, green };
	//AndSpecification size_color { large, green};
	FindProduct fp;

	std::vector<Product*> allproducts {&apple,&tree,&car};

	//auto results = fp.Find(allproducts, green);
	auto results = fp.Find(allproducts, size_color);

	for(auto& i : results)
	{
		std::cout << i->m_Name << " : is " << vColor[(int)i->m_Color].c_str() << std::endl;

	}


	return 0;
}