BINS =
TEST_BINS = test
CLIBC_INSTALL_PATH = /usr/include

all: $(TEST_BINS)

%: %.c;  clang -o $@ -g -fsanitize=address -I. $<

install:; cp -r clibc/ $(CLIBC_INSTALL_PATH)
