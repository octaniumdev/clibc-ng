echo "[+] installing jemalloc..."
cd ./jemalloc
./autogen.sh
make
make install

echo "[+] installing clibc..."
cd ..
sudo make install
