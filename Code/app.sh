echo "statrting report generation....."
export DATA_DIR="/home/kali/lab-1-emscripten-eltopus/Data/report.txt"
rm $DATA_DIR
touch $DATA_DIR
g++ -o app.exe app.cpp
echo "Running C++ Native Code" 
echo "Running C++ Native Code" >> $DATA_DIR
./app.exe >> $DATA_DIR
echo "-----------------------------------------------------------" >> $DATA_DIR
echo "Running Javascript Code"
echo "Running Javascript Code" >> $DATA_DIR
node app.js >> $DATA_DIR
echo "Report Generation Completed..."