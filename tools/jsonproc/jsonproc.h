// jsonproc.h

#ifndef JSONPROC_H
#define JSONPROC_H

#include <cstdio>
#include <cstdlib>
using std::exit;
using std::fprintf;

#include <cstdlib>

#ifdef _MSC_VER

#define FATAL_ERROR(format, ...)                                               \
  do {                                                                         \
    fprintf(stderr, format, __VA_ARGS__);                                      \
    exit(1);                                                                   \
  } while (0)

#else

#define FATAL_ERROR(format, ...)                                               \
  do {                                                                         \
    fprintf(stderr, format, ##__VA_ARGS__);                                    \
    exit(1);                                                                   \
  } while (0)

#endif // _MSC_VER

#endif // JSONPROC_H
