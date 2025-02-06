% https://in.mathworks.com/help/vision/ref/ocr.html#bt548t1-2_1

for day = 1:21
    imagePath = imread(sprintf('Projects/images/Day%d.png', day));
    
    ocrResults = ocr(imagePath);
    recognizedText = ocrResults.Text;
    
    cppFileName = sprintf('Day%d.cpp', day);
    
    fileID = fopen(cppFileName, 'w');
    
    fprintf(fileID, '%s;\n', recognizedText);
    
    fclose(fileID);
    
    disp(['Success: ', cppFileName]);
end
