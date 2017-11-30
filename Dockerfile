FROM tcserver:5000/my-base

RUN mkdir /home/test
COPY tcdock /home/test/
