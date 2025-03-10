#ifndef PORTSMF_COMMON_H
#define PORTSMF_COMMON_H

#define streql(s1, s2) (strcmp(s1, s2) == 0)

// TODO C++23: Replace with std::unreachable()
#ifndef NDEBUG
	#define UNREACHABLE assert(0)
#elif defined(_MSC_VER)
	#define UNREACHABLE __assume(0)
#elif defined(__GNUC__)
	#define UNREACHABLE __builtin_unreachable()
#else
	#error Define UNREACHABLE to your compiler’s intrinsic unreachable marker
#endif

#endif
