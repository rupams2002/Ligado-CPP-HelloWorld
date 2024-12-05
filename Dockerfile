# Use the official GCC image from Docker Hub
FROM gcc:latest

# Set the working directory in the container
WORKDIR /app

# Copy the C++ source file into the container
COPY main.cpp .

# Compile the C++ program
RUN g++ -o hello main.cpp

# Set the entrypoint command to run the compiled program
CMD ["./hello"]
