#/bin/sh

TARGET=test_24444
echo "=============== Build $TARGET ============="
g++ -o $TARGET $TARGET.cpp 

echo "=============== Run $TARGET ==============="
./$TARGET
