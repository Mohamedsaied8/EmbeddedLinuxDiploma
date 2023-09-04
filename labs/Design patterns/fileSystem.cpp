// ObserverPatternSample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

class IFileSystemListener
{
public:
	enum class  FILECHANGE
	{
		FILE_ADDED,
		FILE_REMOVED,
		FILE_UPDATED
	};

	virtual ~IFileSystemListener() {}
	virtual void OnFileChange(FILECHANGE type) = 0;

};

class FileSystemListener: public IFileSystemListener
{
public:
	
    void OnFileChange(IFileSystemListener::FILECHANGE type)
	{
		cout << "File has been changed";
	}

};

class FileSystemMonitor
{
public:
	FileSystemMonitor(const wstring& sPath):m_sPath(sPath)
	{

	}

	void OnFileAdd()
	{
		for (auto& listener : m_Listeners) {
			listener->OnFileChange(IFileSystemListener::FILECHANGE::FILE_ADDED);
		}
	}

	void OnFileRemove()
	{
		for (auto& listener : m_Listeners) {
			listener->OnFileChange(IFileSystemListener::FILECHANGE::FILE_REMOVED);
		}
	}

	void OnFileUpdate()
	{
		for (auto& listener : m_Listeners) {
			listener->OnFileChange(IFileSystemListener::FILECHANGE::FILE_UPDATED);
		}
	}

	void AddFileChangeListener(shared_ptr<IFileSystemListener> listener)
	{
		m_Listeners.push_back(listener);
	}

	void RemoveChangeListener(shared_ptr<IFileSystemListener>  listener)
	{
	//	m_Listeners.erase(listener);
	}

private:
	vector<shared_ptr<IFileSystemListener>> m_Listeners;
	wstring m_sPath;

};
int main()
{
	/* Listener Objects */
	shared_ptr<IFileSystemListener> pListener = make_shared<FileSystemListener>();
	/*Creating FileSystem Monitor*/
	FileSystemMonitor monitor(L"C:\\Log");
	/*Registering File Change Listener*/
	monitor.AddFileChangeListener(pListener);

	//Explicittly calling file changes 
	monitor.OnFileAdd();
	monitor.OnFileRemove();

		
}

