
#ifndef _debug_log_h_
#define _debug_log_h_


class DebugLog {

  public:
    static DebugLog &LOG();
  
  private:
      DebugLog();
  public:
      ~DebugLog();
      bool start();
      bool stop();
      bool enabled() const;
      void log(const char *log) const;
  private:
      bool started;
};


#endif // _debug_log_h_
