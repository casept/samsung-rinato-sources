SET(BEOS 1)

SET(CMAKE_DL_LIBS root be)
SET(CMAKE_SHARED_LIBRARY_C_FLAGS "-fPIC")
SET(CMAKE_SHARED_LIBRARY_CREATE_C_FLAGS "-nostart")
SET(CMAKE_SHARED_LIBRARY_RUNTIME_C_FLAG "-Wl,-rpath,")
SET(CMAKE_SHARED_LIBRARY_RUNTIME_C_FLAG_SEP ":")
SET(CMAKE_SHARED_LIBRARY_SONAME_C_FLAG "-Wl,-soname,")

INCLUDE(Platform/UnixPaths)
LIST(APPEND CMAKE_SYSTEM_PREFIX_PATH /boot/common)
LIST(APPEND CMAKE_SYSTEM_INCLUDE_PATH /boot/common/include)
LIST(APPEND CMAKE_SYSTEM_LIBRARY_PATH /boot/common/lib)
LIST(APPEND CMAKE_SYSTEM_PROGRAM_PATH /boot/common/bin)
LIST(APPEND CMAKE_PLATFORM_IMPLICIT_LINK_DIRECTORIES /boot/common/lib)
LIST(APPEND CMAKE_SYSTEM_INCLUDE_PATH /boot/develop/headers/3rdparty)
LIST(APPEND CMAKE_SYSTEM_LIBRARY_PATH /boot/develop/lib/x86)

IF(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  SET(CMAKE_INSTALL_PREFIX "/boot/common" CACHE PATH
    "Install path prefix, prepended onto install directories." FORCE)
ENDIF(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
