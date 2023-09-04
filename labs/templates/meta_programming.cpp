#include <bits/stdc++.h>

using namespace std;

namespace Helpers {
    template <int lhs, int rhs>
    struct Plus {
        static const int value = lhs + rhs;
    };
    struct True {
        static const bool value = true;
    };
    struct False {
        static const bool value = false;
    };
    // Array <T, T args...> contains the array {args...} of size ::size at ::value
    // For example if A = Array <int, 1, 2, 3>, then A::value[] = {1, 2, 3} and A::size = 3
    template <typename T, T... args>
    struct Array {
        static const T value[sizeof...(args)];
        static const int size = sizeof...(args);
    };
    template <typename T, T... args>
    const T Array <T, args...>::value[sizeof...(args)] = {args...};
}

// Sqrt <N>::value is the integer square root of N
template <int N>
struct Sqrt {
    template <int lo, int hi>
    struct Helper {
        static const int mid = (lo + hi + 1) / 2;
        static const int value = conditional < (N / mid < mid), Helper < lo, mid - 1 >, Helper <mid, hi> >::type::value;
    };
    template <int n>
    struct Helper <n, n> {
        static const int value = n;
    };
    static const int value = Helper <0, N>::value;
};


// Prime <N>::value is true if and only if N is a prime
template <int N>
struct Prime {
    // Helper::value is true iff any prime in [lo, hi] divides N
    template <int lo, int hi>
    struct Helper {
        static const int mid = (lo + hi) / 2;
        static const bool value = conditional < Helper <lo, mid>::value, Helpers::True, Helper < mid + 1, hi >>::type::value;
    };
    template <int d>
    struct Helper <d, d> {
        static const bool value = Prime <d>::value and N % d == 0;
    };
    static const bool value = not conditional < (N <= 1), Helpers::True, Helper <1, Sqrt <N>::value> >::type::value;
};

/*
    Generate <N, F> contains the Helpers::Array with ::value = {F<0>::value, ..., F<2 ^ N - 1>::value} at ::value
    Example:
        using A = Generate<5, Sqrt>::value;
        for (int i = 0; i < A::size; ++i) {
            cout << A::value[i] << endl;
        }
*/

template <int N, template <int> class F>
struct Generate {
    template <int n, int... args>
    struct Helper {
        using value = typename Helper < n - 1, args..., Helpers::Plus <args, sizeof...(args)>::value... >::value;
    };

    template <int... args>
    struct Helper <0, args...> {
        using value = Helpers::Array <decltype(F <0>::value), F <args>::value...>;
    };
    using value = typename Helper <N, 0>::value;
};


int main(int argc, char const *argv[]) {
    const int level = 10; // for primes upto 2^level
    using A = Generate <level, Prime>::value;
    cout << A::size << endl;
    for (int i = 0; i < A::size; ++i) {
        cout << "> " << boolalpha << i << ' ' << A::value[i] << endl;
    }
    return 0;
}
