MYSQLDATAdir = $(localstatedir)
MYSQLSHAREdir = $(pkgdatadir)
MYSQLBASEdir = $(prefix)
MYSQLLIBdir = $(pkglibdir)
pkgplugindir = $(pkglibdir)/plugin
INCLUDES = -I$(top_srcdir)/include -I$(top_builddir)/include \
           -I$(top_srcdir)/sql

pkgplugin_LTLIBRARIES =	libhttpserver_example.la
libhttpserver_example_la_LDFLAGS =	-module -rpath $(pkgplugindir)
libhttpserver_example_la_CXXFLAGS=	$(AM_CXXFLAGS) -DMYSQL_DYNAMIC_PLUGIN
libhttpserver_example_la_CFLAGS =	$(AM_CFLAGS) -DMYSQL_DYNAMIC_PLUGIN
libhttpserver_example_la_SOURCES =	httpserver_example.cpp
