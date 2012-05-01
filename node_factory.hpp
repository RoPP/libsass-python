#include <vector>

#ifndef SASS_NODE_INCLUDED
#include "node_pimpl.hpp"
#endif

namespace Sass {
  using namespace std;

  struct Token;
  struct Node_Impl;
  
  class Node_Factory {
    vector<Node_Impl*> pool_;
    Node_Impl* alloc_Node_Impl(Node_Type type, string* file, size_t line);
  public:
    Node node(Node_Type type, string* file, size_t line, const Token& t);
    Node node(Node_Type type, string* file, size_t line, size_t size);
    Node node(string* file, size_t line, double v);
    Node node(string* file, size_t line, double v, const Token& t);
    Node node(string* file, size_t line, double r, double g, double b, double a = 1.0);
  };
  
}