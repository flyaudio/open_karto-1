#ifndef OPEN_KARTO_MAPPER_H
#define OPEN_KARTO_MAPPER_H

#include <map>
#include <vector>

#include <open_karto/Karto.h>

namespace karto
{
  ////////////////////////////////////////////////////////////////////////////////////////
  // Listener classes

  /**
   * Abstract class to listen to mapper debug messages
   */
  class MapperDebugListener
  {
  public:
    /**
     * Called with debug message
     */
    virtual void Debug(const std::string& /*rInfo*/) {};
  };
}