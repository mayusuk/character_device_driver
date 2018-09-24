#include "data.h"

struct dump_arg {
 int no_nodes; //no. of nodes from bucket
 int n; // the n-th bucket (in) or n objects retrieved (out)
 struct object_data object_array[8];
};

struct dump_all {
 int no_nodes;
 struct object_data object_array[MAX_NUMBER_OF_NODES];
};

