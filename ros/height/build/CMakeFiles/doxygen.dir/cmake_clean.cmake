file(REMOVE_RECURSE
  "../msg_gen"
  "../msg_gen"
  "../src/height/msg"
)

# Per-language clean rules from dependency scanning.
foreach(lang)
  include(CMakeFiles/doxygen.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()