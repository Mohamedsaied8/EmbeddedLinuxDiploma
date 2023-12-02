#include <ostream>
#include <string>
#include <vector>
#include <fstream>

// SRP is about: the class has one reason to change

struct Journal //:public IJournal*/
{
	/// <summary>
	/// The Private or Public members in C++
	///
	/// </summary>
	std::string m_title;
	std::vector<std::string> m_entries;
	explicit Journal(const std::string& title)
		: m_title (title)
	{
		//m_title = title;
	}

	void add(const std::string& entry) 
	{
		m_entries.push_back(entry);
	}
	
	/// <summary>
	///  not single Responsablity
	///
	/// </summary>
	/// <param name="filename">The file name to save entries </param>
	// void save(const std::string& filename)
	// {
	// 	std::ofstream ofs(filename);
	// 	for (auto& s : m_entries)
	// 		ofs << s.c_str() << std::endl;
	// }
};

/// <summary>
/// fix the class for single Resposablity 
/// </summary>

struct PrintEntirsManager
{
	/// <summary>
	/// static function for call the save operation 
	/// </summary>
	/// <param name="j"></param>
	/// <param name="filename"></param>
	static void save(const Journal& j, const std::string& filename)
	{
		std::ofstream ofs(filename);
		for (auto& s : j.m_entries)
			ofs << s << std::endl;
	}
};



auto main(int  argc,char** argv)-> int
{
	Journal Alahram{ "Alahram" };
	//JournalSport Alahly{ "AlAhly" };

	Alahram.add("There is was a visit for the prime minstar of Egypt to india");
	//Alahly.add("Alahly wining the third place in the worl cup");
 	PrintEntirsManager::save(Alahram, "AlahramXML");
	//PrintEntirsManager::save(Alahly,"Al-Ahly");

	return 0;
}


struct IJournal
{
//	std::string m_title;
//	std::vector<std::string> m_entries;
//	virtual void add(const std::string& entry) = 0;
//};



//struct JournalSport : public IJournal
//{
//	
//	explicit JournalSport(const std::string& title)
//	{
//		m_title = title;
//	}
//
//	void add(const std::string& entry) override
//	{
//		m_entries.push_back(entry);
//	}
//	/// <summary>
//	///  not single Responsablity
//	///
//	/// </summary>
//	/// <param name="filename">The file name to save entries </param>
//	void save(const std::string& filename)
//	{
//		std::ofstream ofs(filename);
//		for (auto& s : m_entries)
//			ofs << s.c_str() << std::endl;
//
//	}
//};
