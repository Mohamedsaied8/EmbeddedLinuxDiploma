// C++ lock objects
// To go with the various mutex types, the C++ Standard defines a triplet of class templates for objects that hold a lock. These are:

// std::lock_guard<>,
// std::unique_lock<> and
// std::shared_lock<>.
// For basic operations, they all acquire the lock in the constructor, and release it in the destructor,
//though they can be used in more complex ways if desired.

// std::lock_guard<> is the simplest type, and just holds a lock across a critical section in a single block:
#include <mutex>

std::mutex m;
void f(){
    std::lock_guard<std::mutex> guard(m);
    // do stuff
}

//std::unique_lock<> is similar, 
//except it can be returned from a function without releasing the lock,
// and can have the lock released before the destructor:

std::mutex m;
std::unique_lock<std::mutex> f(){
    std::unique_lock<std::mutex> guard(m);
    // do stuff
    return std::move(guard);
}

void g(){
    std::unique_lock<std::mutex> guard(f());
    // do more stuff
    guard.unlock();
}

//std::shared_lock<> is almost identical to std::unique_lock<> except that it acquires a shared lock on the mutex.
// If you are using a std::shared_timed_mutex then you can use std::lock_guard<std::shared_timed_mutex>
// or std::unique_lock<std::shared_timed_mutex> for the exclusive lock,
// and std::shared_lock<std::shared_timed_mutex> for the shared lock.

std::shared_timed_mutex m;
void reader(){
    std::shared_lock<std::shared_timed_mutex> guard(m);
    // do read-only stuff
}
void writer(){
    std::lock_guard<std::shared_timed_mutex> guard(m);
    // update shared data
}
