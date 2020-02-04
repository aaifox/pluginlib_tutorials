#ifndef PLUGINLIB_TUTORIALS__POLYGON_PLUGINS_H_
#define PLUGINLIB_TUTORIALS__POLYGON_PLUGINS_H_

#include <pluginlib_tutorials_/polygon_base.h>
#include <cmath>

namespace polygon_plugins
{
  class Triangle : public polygon_base::RegularPolygon
  {
    public:
      Triangle(){}
      
      void initialize(double side_length)
      {
        side_length_ = side_length;
      }
      
      double getHeight()
      {
        return sqrt(3) * side_height_/2;
      }
      
      double area()
      {
        return 0.5 * side_length_ * getHeight();
      }
      
    private:
      double side_height_;
  };
  
  class Square : public polygon_base::RegularPolygon
  {
    public:
      Square(){};
      
      void initialize(double side_length)
      {
        side_lenght_ = side_lenght;
      }
      
      double area()
      {
        return side_lenght_ * side_lenght_;
      }
      
    private:
      double side_lenght_;
  };
  
};

#endif
