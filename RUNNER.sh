#g++ -Wall main.cpp -o main
#./main

case "$OSTYPE" in
    darwin*)
        echo "Running on Mac"
        clang++ -std=c++17 main.cpp -o main \
            -DGL_SILENCE_DEPRECATION \
            -I./glfw/include \
            -L./glfw/lib-arm64 \
            -lglfw3 \
            -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo -framework Metal -framework QuartzCore
        ;;
    linux*)
        echo "Running on Linux"
        echo "Currently doesn't support Linux sorry :("
        ;;
    msys*|cygwin*|win32*)
        echo "Running on Windows"
        ;;
    *)
        echo "unknown: $OSTYPE"
        ;;
esac

./main