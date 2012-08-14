/*
 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this file,
 You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#ifndef __COMMAND_EVENT_HANDLER__
#define __COMMAND_EVENT_HANDLER__

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#include <dirent.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

#include <prio.h>
#include <prproces.h>
#include <prtime.h>
#include <prtypes.h>

#include "misc.h"
#include "SessionEventHandler.h"

class SessionEventHandler;


class CommandEventHandler {
private:
   SessionEventHandler *session; // need to talk about deallocating this!

   std::string actualPath(std::string path);
   void do_rmdr(std::string path, std::ostringstream &out);
public:

  CommandEventHandler();
  CommandEventHandler(SessionEventHandler *session);

  std::string cd(std::string path);
  std::string cwd();
  PRUint64 clok();
  std::string dirw(std::string path);
  std::string exec(std::string cmd);
  std::string hash(std::string path);
  std::string id();
  std::string os();
  std::string systime();
  std::string uptime();
  std::string screen();
  std::string memory();
  std::string power();
  std::string ps();
  std::string isDir(std::string path);
  std::string ls(std::string path);
  std::string mkdir(std::string path);
  std::string rm(std::string path);
  std::string rmdr(std::string path);
  std::string testroot();
};

#endif
