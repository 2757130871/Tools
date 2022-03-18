#pragma once

#include <gflags/gflags.h>
#include <glog/logging.h>

namespace base {
  static void InitApp(int argc, char** argv) {
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    google::InitGoogleLogging(argv[0]);
    fLS::FLAGS_log_dir = "../log/";
    return;
  }
}  // end base
