#include <iostream>
#include <mysql/plugin.h>
#include <mysql/mysql_version.h>

static int httpserver_example_plugin_init(void *p)
{
  std::cerr << "Hello World! This is debug message from my first MySQL Daemon Plugin!" << std::endl;

  return 0;
}

struct st_mysql_daemon httpserver_example_plugin=
{ MYSQL_DAEMON_INTERFACE_VERSION  };

mysql_declare_plugin(httpserver_example)
{
  MYSQL_DAEMON_PLUGIN,
  &httpserver_example_plugin,
  "httpserver_example",
  "Kousuke Ebihara <kousuke@co3k.org>",
  "HTTP Server dayo. License ha GPL 3 janakute GPL 2 ni suru yotei dayo...",
  PLUGIN_LICENSE_GPL,
  httpserver_example_plugin_init,
  NULL,
  0x0100,
  NULL,
  NULL,
  NULL
}
mysql_declare_plugin_end;
