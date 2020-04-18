#include "debugLog.h"
#include "HardwareSerial.h"

DebugLog& DebugLog::LOG() {
  static DebugLog _log;
  return _log;  
}

DebugLog::DebugLog() {
  started = false;
}

DebugLog::~DebugLog() {
  if (started) {
    stop();
  }
  started = false;
}

bool DebugLog::start() {
  Serial.begin(9600);
  return true;
}

bool DebugLog::stop() {
  Serial.end();
}

bool DebugLog::enabled() const {
  return started;
}

void DebugLog::log(const char *log) const {
  Serial.print(log);
}
