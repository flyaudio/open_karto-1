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
   * Abstract class to listen to mapper general messages
   */
  class MapperListener
  {
  public:
    /**
     * Called with general message
     */
    virtual void Info(const std::string& /*rInfo*/) {};
  };
}