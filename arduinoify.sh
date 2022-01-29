echo -e "Making \e[32m\"rube-goldberg-machine/\"\e[0m"
mkdir -p rube-goldberg-machine

echo -e "Moving \e[32m\"main.cpp\" \e[0m-> \e[32m\"rube-goldberg-machine/rube-goldberg-machine.ino\"\e[0m"
cp ./main.cpp rube-goldberg-machine/rube-goldberg-machine.ino

echo -e "Done!"
