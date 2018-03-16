FROM centos:centos6

RUN yum install -y gcc-c++

ADD segv.cpp .
ADD devcatchsegv .
RUN g++ segv.cpp

CMD ["./devcatchsegv", "./a.out"]
