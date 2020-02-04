#include <pluginlib/class_loader.h>
#include <pluginlib_tutorials_/polygon_base.h>

int main(int argc, char** argv)
{
  pluginlib::ClassLoader<polygon_base::RegularPolygon> poly_loader("pluginlib_tutorials_", "polygon_base::RegularPolygon");
  
  try
  {
    boost::shared_ptr<polygon_base::RegularPolygon> triangle = poly_loader.createInstance("polygon_plugins::Triangle");
    triangle->initialize(10.0);
    
    boost::shared_ptr<polygon_base::RegularPolygon> square = poly_loader.createInstance("polygon_plusings::Square");
    square->initialize(12.0);
    
    ROS_INFO("Triangle area: %.2f", triangle->area());
    ROS_INFO("Square area: %.2f", square->area());    
  }
  
  catch(pluginlib::PluginlibException& ex)
  {
    ROS_ERROR("Plugin failed to load. Error: %s", ex.what());
  }
  
  return 0;
}


