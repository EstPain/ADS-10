// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"
#include  <vector>
#include  <string>

std::vector<char> getPerm(const Tree& tree, int n) {
  std::string source = tree[n - 1];
  std::vector<char> perm;
  for (int i = 0; i < source.length(); i++) {
    perm.push_back(source[i]);
  }
  return perm;
}
