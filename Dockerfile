FROM gcc:latest
WORKDIR /usr/src/proiect
COPY proiect.cpp .
RUN g++ proiect.cpp -o proiect 
CMD ["./proiect"]
