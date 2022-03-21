for file in `ls | grep cpp`
do
  name=${file%.MOV}
  ffmpeg -i $file ${name}.mp4
  ffmpeg -i ${name}.mp4 2020_${name}.mp4
done


for file in `ls | grep txt`
do
  mv ${file} ${file:4:17}
  
done

# rm ${file} ${file}.