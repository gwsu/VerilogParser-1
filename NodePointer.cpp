#include "NodePointer.h"
#include "Node.h"

NodePointer::NodePointer(NodeItr i) : it(i) {}
NodePointer::NodePointer(int i) { it = NodeItr(); }
const Node& NodePointer::operator*() const { return (*it); }
const Node* NodePointer::operator->() const { return &(*it); }